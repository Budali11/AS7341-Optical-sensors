#include "ColorTemperature.h"

float X, Y, Z, x, y, z, n, cdc;

UWORD TemCalculate(sModeOneData_t data1, sModeTwoData_t data2)
{

	X = 0.39814*data1.channel1 + 1.29540*data1.channel2 + 0.36956*data1.channel3 + 0.10902*data1.channel4 +
			0.71942*data2.channel5 + 1.78180*data2.channel6 + 1.10110*data2.channel7 - 0.03991*data2.channel8 -
			0.27597*data2.CLEAR - 0.02347*data2.NIR;
	Y = 0.01396*data1.channel1 + 0.16748*data1.channel2 + 0.23538*data1.channel3 + 1.42750*data1.channel4 +
				1.88670*data2.channel5 + 1.14200*data2.channel6 + 0.46497*data2.channel7 - 0.02702*data2.channel8 -
				0.24468*data2.CLEAR - 0.01993*data2.NIR;
	Z = 1.95010*data1.channel1 + 6.45490*data1.channel2 + 2.78010*data1.channel3 + 0.18501*data1.channel4 +
				0.15325*data2.channel5 + 0.09539*data2.channel6 + 0.10563*data2.channel7 + 0.08866*data2.channel8 -
				0.61140*data2.CLEAR - 0.00938*data2.NIR;

	if ((x+Y+Z) != 0)
	{
		x = X/(X+Y+Z);
		y = Y/(X+Y+Z);
		z = Z/(X+Y+Z);
	}
	else
		return 0;


	n = (x-0.3320)/(0.1858-y);
	cdc = 437*n*n*n + 3601*n*n + 6831*n + 5517;

	return (UWORD)cdc;
}

UWORD ColorRenderingFactor(sModeOneData_t data1, sModeTwoData_t data2)
{
	return 1;
}