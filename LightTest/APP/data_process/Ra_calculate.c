

#include "Ra_calculate.h"
#include "Ra_defs.h"

#define ATTRS (handle->light_attrs)

int Calcute_Ra(light_t *handle)
{
    light_attrib_t ref_light = {0}, sam_r[8] = {0}, sam_k[8] = {0};
    double sum_Ri = 0;
    float delta_E[8] = {0}, delta_c = 0;
    float W_k[8] = {0}, W_r[8] = {0}, U_k[8] = {0}, U_r[8] = {0}, V_k[8] = {0}, V_r[8] = {0};
    /*first, select reference light with color temperature*/
    if(ATTRS.cdc <= 5000)
    {
        /*spectral of reference light should be Sp*/
        /*calculate reference light source power distribution function*/
        float tmp;
        for(uint8_t i = 0; i < 81; i++)
        {
            tmp = c_2 / ((380 + 5 * i) * ATTRS.cdc);
            ref_light.spectral_sta[i] = c_1 * ((380 + 5 * i) * (1e-14)) / (tmp - 1);
        }
    }
    else
    {
        /*spectral of reference light should be Sd*/
        float M_1, M_2, tmp = 1000 / ATTRS.cdc;
        float x_d = 0, y_d = 0;
        if((ATTRS.cdc >= 5000) && (ATTRS.cdc <= 7000))
            x_d = (-4.6070) * (tmp*tmp*tmp) + 2.9678 * (tmp*tmp) + 0.09911 * tmp + 0.244063;
        else if((ATTRS.cdc > 7000) && (ATTRS.cdc <= 25000))
            x_d = (-2.0064) * (tmp*tmp*tmp) + 1.9018 * (tmp*tmp) + 0.24748 * tmp + 0.237040;
        else
            return -1;
        y_d = -3.0000 * x_d * x_d + 2.870 * x_d - 0.2750;
        M_1 = (-1.3515 - 1.7703 * x_d + 5.9114 * y_d) / (0.0241 + 0.2562 * x_d - 0.7341 * y_d);
        M_2 = (0.0300 - 31.4424 * x_d + 30.0171 * y_d) / (0.0241 + 0.2562 * x_d - 0.7341 * y_d);
        /*calculate reference light source power distribution function*/
        for(uint8_t i = 0; i < 81; i++)
            ref_light.spectral_sta[i] = std_light_D_vec_sta[i][0] + M_1 * std_light_D_vec_sta[i][1] + M_2 * std_light_D_vec_sta[i][2];
    }

    /*second, calculate XYZ and compare chroma difference (delta c)*/
    /*calculate XYZ*/
    ATTRS.tri_X = 0;
    ATTRS.tri_Y = 0;
    ATTRS.tri_Z = 0;
    for(uint8_t i = 0; i < 9; i++){
        ATTRS.tri_X += ATTRS.spectral[i] * _x_lamda[i] * delta_lambda[i];
        ATTRS.tri_Y += ATTRS.spectral[i] * _y_lamda[i] * delta_lambda[i];
        ATTRS.tri_Z += ATTRS.spectral[i] * _z_lamda[i] * delta_lambda[i];
    }
    /*normalization*/
    {
        float tmp = ATTRS.tri_X + ATTRS.tri_Y + ATTRS.tri_Z;
        //float tmp = 100 / ATTRS.tri_Y; //maybe right
        ATTRS.tri_X /= tmp;
        ATTRS.tri_Y /= tmp;
        ATTRS.tri_Z /= tmp;
    }

    /*calculate XYZ of 8 color sample under test_light and refer_light*/
    for(uint8_t i = 0; i < 8; i++)
    {
        /*i represents amounts of color samples*/
        for(uint8_t j = 0; j < 9; j++)
        {
            /*j represents wavelength*/
            /*XYZ under test_light*/
            sam_k[i].tri_X += ATTRS.spectral[j] * _x_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
            sam_k[i].tri_Y += ATTRS.spectral[j] * _y_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
            sam_k[i].tri_Z += ATTRS.spectral[j] * _z_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
            /*XYZ under refer_light*/
            sam_r[i].tri_X += ref_light.spectral[j] * _x_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
            sam_r[i].tri_Y += ref_light.spectral[j] * _y_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
            sam_r[i].tri_Z += ref_light.spectral[j] * _z_lamda[j] * vis_reflect_table[j][i] * delta_lambda[i];
        }
        {
            float tmp = sam_k[i].tri_X + sam_k[i].tri_Y + sam_k[i].tri_Z;
            //float tmp = 100 / sam_k[i].tri_Y; //maybe right
            /*normalization*/
            sam_k[i].tri_X /= tmp;
            sam_k[i].tri_Y /= tmp;
            sam_k[i].tri_Z /= tmp;
        }
        {
            float tmp = sam_r[i].tri_X + sam_r[i].tri_Y + sam_r[i].tri_Z;
            //float tmp = 100 / sam_r[i].tri_Y; //maybe right
            /*normalization*/
            sam_r[i].tri_X /= tmp;
            sam_r[i].tri_Y /= tmp;
            sam_r[i].tri_Z /= tmp;
        }
    }

    /*calculate XYZ of reference light*/
    for(uint8_t i = 0; i < 81; i++)
    {
        ref_light.tri_X += ref_light.spectral_sta[i] * _x_lamda_sta[i] * (380 + 5 * i);
        ref_light.tri_Y += ref_light.spectral_sta[i] * _y_lamda_sta[i] * (380 + 5 * i);
        ref_light.tri_Z += ref_light.spectral_sta[i] * _z_lamda_sta[i] * (380 + 5 * i);
    }
    /*normalzation*/
    {
        float tmp = ref_light.tri_X + ref_light.tri_Y + ref_light.tri_Z;
        //float tmp = 100 / ref_light.tri_Y; //maybe right
        ref_light.tri_X /= tmp;
        ref_light.tri_Y /= tmp;
        ref_light.tri_Z /= tmp;
    }

    /*calculate chroma coordinate*/
    /*test_light don't need to correct*/
    ATTRS.param_u = 4 * ATTRS.tri_X / (ATTRS.tri_X + 15 * ATTRS.tri_Y + 3 * ATTRS.tri_Z);
    ATTRS.param_v = 6 * ATTRS.tri_Y / (ATTRS.tri_X + 15 * ATTRS.tri_Y + 3 * ATTRS.tri_Z);

    /*reference light don't need correction*/
    ref_light.param_u = 4 * ref_light.tri_X / (ref_light.tri_X + 15 * ref_light.tri_Y + 3 * ref_light.tri_Z);
    ref_light.param_v = 6 * ref_light.tri_Y / (ref_light.tri_X + 15 * ref_light.tri_Y + 3 * ref_light.tri_Z);

    /*calculate delta_c*/
    delta_c = sqrt((ATTRS.param_u - ref_light.param_u) * (ATTRS.param_u - ref_light.param_u) + 
                    (ATTRS.param_v - ref_light.param_v) * (ATTRS.param_v - ref_light.param_v));
    if(delta_c > 0.0054)
    {
        return -1;

    }

    /*color sample under test_light and refer_light*/
    for(uint8_t i = 0; i < 8; i++)
    {
        /*i represents the number of one sample*/ 
        /*under test_light*/
        sam_k[i].param_u = 4 * sam_k[i].tri_X / (sam_k[i].tri_X + 15 * sam_k[i].tri_Y + 3 * sam_k[i].tri_Z);
        sam_k[i].param_v = 6 * sam_k[i].tri_Y / (sam_k[i].tri_X + 15 * sam_k[i].tri_Y + 3 * sam_k[i].tri_Z);
        /*under refer_light*/
        sam_r[i].param_u = 4 * sam_r[i].tri_X / (sam_r[i].tri_X + 15 * sam_r[i].tri_Y + 3 * sam_r[i].tri_Z);
        sam_r[i].param_v = 6 * sam_r[i].tri_Y / (sam_r[i].tri_X + 15 * sam_r[i].tri_Y + 3 * sam_r[i].tri_Z);
    }

    /*third, color sample under test_light correction*/
    /*calculate parameter that calculation needs*/
    /*test_light*/
    ATTRS.param_c = (4 - ATTRS.param_u - 10 * ATTRS.param_v) / ATTRS.param_v;
    ATTRS.param_d = (1.708 * ATTRS.param_v + 0.404 - 1.481 * ATTRS.param_u) / ATTRS.param_v;
    /*ref_light*/
    ref_light.param_c = (4 - ref_light.param_u - 10 * ref_light.param_v) / ref_light.param_v;
    ref_light.param_d = (1.708 * ref_light.param_v + 0.404 - 1.481 * ref_light.param_u) / ref_light.param_v;
    /*color samples under test_light, does not need values that under refer_light*/
    for(uint8_t i = 0; i < 8; i++)
    {
        sam_k[i].param_c = (4 - sam_k[i].param_u - 10 * sam_k[i].param_v) / sam_k[i].param_v;
        sam_k[i].param_d = (1.708 * sam_k[i].param_v + 0.404 - 1.481 * sam_k[i].param_u) / sam_k[i].param_v;
    }
    /*correction*/
    for(uint8_t i = 0; i < 8; i++)
    {
        sam_k[i].param_u = (10.872 + 0.404 * (ref_light.param_c / ATTRS.param_c) * sam_k[i].param_c - 4 * (ref_light.param_d / ATTRS.param_d) * sam_k[i].param_d)
                                / (16.518 + 1.481 * (ref_light.param_c / ATTRS.param_c) * sam_k[i].param_c - (ref_light.param_d / ATTRS.param_d) * sam_k[i].param_d);
        sam_k[i].param_v = 5.520 / (16.518 + 1.481 * (ref_light.param_c / ATTRS.param_c) * sam_k[i].param_c - (ref_light.param_d / ATTRS.param_d) * sam_k[i].param_d);
    }

    /*forth, calculate W, U, V, delta_E to gain Ri then Ra*/
    for(uint8_t i = 0; i < 8; i++)
    {
        /*color samples under refer_light*/
        W_r[i] = 25 * pow(sam_r[i].tri_Y, 1 / 3) - 17;
        U_r[i] = 13 * W_r[i] * (sam_r[i].param_u - ref_light.param_u);
        V_r[i] = 13 * W_r[i] * (sam_r[i].param_v - ref_light.param_v);

        /*color samples under test_light*/
        W_k[i] = 25 * pow(sam_k[i].tri_Y, 1 / 3) - 17;
        U_k[i] = 13 * W_k[i] * (sam_k[i].param_u - ref_light.param_u);
        V_k[i] = 13 * W_k[i] * (sam_k[i].param_v - ref_light.param_v);
    }
    /*calculate delta_E and sum of Ri*/
    for(uint8_t i = 0; i < 8; i++)
    {
        delta_E[i] = sqrt( (W_r[i] - W_k[i]) * (W_r[i] - W_k[i]) +
                            (U_r[i] - U_k[i]) * (U_r[i] - U_k[i]) +
                            (V_r[i] - V_k[i]) * (V_r[i] - V_k[i]) );
        sum_Ri += (100 - 4.6 * delta_E[i]);
    }

    /*finally, gain Ra*/
    handle->Ra = sum_Ri / 8;
    return 0;
}

void My_Getdata_test(light_t *handle)
{   
	AS7341_ControlLed(true,10);
    AS7341_startMeasure(eF1F4ClearNIR);
    *(handle->pdata1) = AS7341_ReadSpectralDataOne();
    printf("channel1(405-425nm):\r\n");
    printf("%d\r\n",handle->pdata1->channel1);
    printf("channel2(435-455nm):\r\n");
    printf("%d\r\n",handle->pdata1->channel2);
    printf("channel3(470-490nm):\r\n");
    printf("%d\r\n",handle->pdata1->channel3);
    printf("channel4(505-525nm):\r\n");   
    printf("%d\r\n",handle->pdata1->channel4);
    AS7341_startMeasure(eF5F8ClearNIR);
    *(handle->pdata2) =AS7341_ReadSpectralDataTwo();
    printf("channel5(545-565nm):\r\n");
    printf("%d\r\n",handle->pdata2->channel5);
    printf("channel6(580-600nm):\r\n");
    printf("%d\r\n",handle->pdata2->channel6);
    printf("channel7(620-640nm):\r\n");
    printf("%d\r\n",handle->pdata2->channel7);
    printf("channel8(670-690nm):\r\n");
    printf("%d\r\n",handle->pdata2->channel8);
    printf("Clear:\r\n");
    printf("%d\r\n",handle->pdata2->CLEAR);
    printf("NIR:\r\n");
    printf("%d\r\n",handle->pdata2->NIR);
    printf("--------------------------\r\n");
    DEV_Delay_ms(500);
    handle->light_attrs.spectral[0] = (handle->pdata1->channel1) / (ITIME * GAIN);
    handle->light_attrs.spectral[1] = (handle->pdata1->channel2) / (ITIME * GAIN);
    handle->light_attrs.spectral[2] = (handle->pdata1->channel3) / (ITIME * GAIN);
    handle->light_attrs.spectral[3] = (handle->pdata1->channel4) / (ITIME * GAIN);
    handle->light_attrs.spectral[4] = (handle->pdata2->channel5) / (ITIME * GAIN);
    handle->light_attrs.spectral[5] = (handle->pdata2->channel6) / (ITIME * GAIN);
    handle->light_attrs.spectral[6] = (handle->pdata2->channel7) / (ITIME * GAIN);
    handle->light_attrs.spectral[7] = (handle->pdata2->channel8) / (ITIME * GAIN);
    handle->light_attrs.spectral[8] = (handle->pdata1->CLEAR) / (ITIME * GAIN);
    handle->light_attrs.spectral[9] = (handle->pdata1->NIR) / (ITIME * GAIN);
    
}

void Device_Init(void)
{
    AS7341_Init(eSpm);
	AS7341_ATIME_config(ATIME);
	AS7341_ASTEP_config(ASTEP);
	AS7341_AGAIN_config(AGAIN);
	AS7341_EnableLED(false);// LED Enable
    AS7341_ControlLed(true,10);//Turn on or off the LED and set the brightness of the LED
	
}

UWORD TemCalculate(light_t *handle)
{
	float X = 0,
		Y = 0,
		Z = 0,
		x = 0,
		y = 0,
		n = 0,
		cdc = 0;

	X = 0.39814*handle->pdata1->channel1 + 1.29540*handle->pdata1->channel2 + 0.36956*handle->pdata1->channel3 + 0.10902*handle->pdata1->channel4 +
			0.71942*handle->pdata2->channel5 + 1.78180*handle->pdata2->channel6 + 1.10110*handle->pdata2->channel7 - 0.03991*handle->pdata2->channel8 -
			0.27597*handle->pdata2->CLEAR - 0.02347*handle->pdata2->NIR;
	Y = 0.01396*handle->pdata1->channel1 + 0.16748*handle->pdata1->channel2 + 0.23538*handle->pdata1->channel3 + 1.42750*handle->pdata1->channel4 +
				1.88670*handle->pdata2->channel5 + 1.14200*handle->pdata2->channel6 + 0.46497*handle->pdata2->channel7 - 0.02702*handle->pdata2->channel8 -
				0.24468*handle->pdata2->CLEAR - 0.01993*handle->pdata2->NIR;
	Z = 1.95010*handle->pdata1->channel1 + 6.45490*handle->pdata1->channel2 + 2.78010*handle->pdata1->channel3 + 0.18501*handle->pdata1->channel4 +
				0.15325*handle->pdata2->channel5 + 0.09539*handle->pdata2->channel6 + 0.10563*handle->pdata2->channel7 + 0.08866*handle->pdata2->channel8 -
				0.61140*handle->pdata2->CLEAR - 0.00938*handle->pdata2->NIR;

	if ((X+Y+Z) != 0)
	{
		x = X/(X+Y+Z);
		y = Y/(X+Y+Z);
	}
	else
		return 0;


	n = (x-0.3320)/(0.1858-y);
	cdc = 437*n*n*n + 3601*n*n + 6831*n + 5517;

	return (UWORD)cdc;
}
