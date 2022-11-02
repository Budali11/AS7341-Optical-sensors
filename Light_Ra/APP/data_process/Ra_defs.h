// Copyright 2022 HaoNan
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#if !defined RA_DEFS_H
#define RA_DEFS_H


#define ATIME 0
#define ASTEP 999
#define AGAIN 7
#define GAIN (pow(2, AGAIN))
#define ITIME ((ATIME + 1) * (ASTEP + 1) * 2.78 / 1000000)

/* channel1 divider */
#define CH1_390NM_DIVISOR 			0.04050702638550258
#define CH1_395NM_DIVISOR 			0.1182394407833163
#define CH1_400NM_DIVISOR 			0.1863927988858962
#define CH1_405NM_DIVISOR 			0.2394457209433986
#define CH1_410NM_DIVISOR 			0.2731001747286012
#define CH1_415NM_DIVISOR 			0.2846296765465703
#define CH1_420NM_DIVISOR 			CH1_410NM_DIVISOR
#define CH1_425NM_DIVISOR 			CH1_405NM_DIVISOR
#define CH1_430NM_DIVISOR 			CH1_400NM_DIVISOR
#define CH1_435NM_DIVISOR 			CH1_395NM_DIVISOR
#define CH1_440NM_DIVISOR 			CH1_390NM_DIVISOR

/* channel2 divider */
#define CH2_415NM_DIVISOR 			0.02905818257394796
#define CH2_420NM_DIVISOR 			0.08548579177284217
#define CH2_425NM_DIVISOR 			0.1369452774821088
#define CH2_430NM_DIVISOR 			0.1804460014399452
#define CH2_435NM_DIVISOR 			0.2134598596886202
#define CH2_440NM_DIVISOR 			0.2340682067872125
#define CH2_445NM_DIVISOR 			0.2410733605106461
#define CH2_450NM_DIVISOR 			CH2_440NM_DIVISOR
#define CH2_455NM_DIVISOR 			CH2_435NM_DIVISOR
#define CH2_460NM_DIVISOR 			CH2_430NM_DIVISOR
#define CH2_465NM_DIVISOR 			CH2_425NM_DIVISOR
#define CH2_470NM_DIVISOR 			CH2_420NM_DIVISOR
#define CH2_475NM_DIVISOR 			CH2_415NM_DIVISOR

/* channel3 divider */
#define CH3_445NM_DIVISOR 			0.02185239926619434
#define CH3_450NM_DIVISOR 			0.06460214309120485
#define CH3_455NM_DIVISOR 			0.1045284632676534
#define CH3_460NM_DIVISOR 			0.1398863880160892
#define CH3_465NM_DIVISOR 			0.1691306063588583
#define CH3_470NM_DIVISOR 			0.1909830056250525
#define CH3_475NM_DIVISOR 			0.204488531107294
#define CH3_480NM_DIVISOR 			0.2090569265353069
#define CH3_485NM_DIVISOR 			CH3_475NM_DIVISOR
#define CH3_490NM_DIVISOR 			CH3_470NM_DIVISOR
#define CH3_495NM_DIVISOR 			CH3_465NM_DIVISOR
#define CH3_500NM_DIVISOR 			CH3_460NM_DIVISOR
#define CH3_505NM_DIVISOR 			CH3_455NM_DIVISOR
#define CH3_510NM_DIVISOR 			CH3_450NM_DIVISOR
#define CH3_515NM_DIVISOR 			CH3_445NM_DIVISOR

/* channel4 divider */
#define CH4_475NM_DIVISOR 			0.01702690031609828
#define CH4_480NM_DIVISOR 			0.05050087027954599
#define CH4_485NM_DIVISOR 			0.08225509367474164
#define CH4_490NM_DIVISOR 			0.1112082185089551
#define CH4_495NM_DIVISOR 			0.1363742808414028
#define CH4_500NM_DIVISOR 			0.156896280602718
#define CH4_505NM_DIVISOR 			0.1720753657044554
#define CH4_510NM_DIVISOR 			0.1813946306087808
#define CH4_515NM_DIVISOR 			0.184536718926604
#define CH4_520NM_DIVISOR 			CH4_510NM_DIVISOR
#define CH4_525NM_DIVISOR 			CH4_505NM_DIVISOR
#define CH4_530NM_DIVISOR 			CH4_500NM_DIVISOR
#define CH4_535NM_DIVISOR 			CH4_495NM_DIVISOR
#define CH4_540NM_DIVISOR 			CH4_490NM_DIVISOR
#define CH4_545NM_DIVISOR 			CH4_485NM_DIVISOR
#define CH4_550NM_DIVISOR 			CH4_480NM_DIVISOR
#define CH4_555NM_DIVISOR 			CH4_475NM_DIVISOR

/* channel5 divider */
#define CH5_515NM_DIVISOR 			CH4_475NM_DIVISOR
#define CH5_520NM_DIVISOR 			CH4_480NM_DIVISOR
#define CH5_525NM_DIVISOR 			CH4_485NM_DIVISOR
#define CH5_530NM_DIVISOR 			CH4_490NM_DIVISOR
#define CH5_535NM_DIVISOR 			CH4_495NM_DIVISOR
#define CH5_540NM_DIVISOR 			CH4_500NM_DIVISOR
#define CH5_545NM_DIVISOR 			CH4_505NM_DIVISOR
#define CH5_550NM_DIVISOR 			CH4_510NM_DIVISOR
#define CH5_555NM_DIVISOR           CH4_515NM_DIVISOR
#define CH5_560NM_DIVISOR 			CH4_520NM_DIVISOR
#define CH5_565NM_DIVISOR 			CH4_525NM_DIVISOR
#define CH5_570NM_DIVISOR 			CH4_530NM_DIVISOR
#define CH5_575NM_DIVISOR 			CH4_535NM_DIVISOR
#define CH5_580NM_DIVISOR 			CH4_540NM_DIVISOR
#define CH5_585NM_DIVISOR 			CH4_545NM_DIVISOR
#define CH5_590NM_DIVISOR 			CH4_550NM_DIVISOR
#define CH5_595NM_DIVISOR 			CH4_555NM_DIVISOR

/* channel6 divider */
#define CH6_550NM_DIVISOR 			CH5_515NM_DIVISOR
#define CH6_555NM_DIVISOR 			CH5_520NM_DIVISOR
#define CH6_560NM_DIVISOR 			CH5_525NM_DIVISOR
#define CH6_565NM_DIVISOR 			CH5_530NM_DIVISOR
#define CH6_570NM_DIVISOR 			CH5_535NM_DIVISOR
#define CH6_575NM_DIVISOR 			CH5_540NM_DIVISOR
#define CH6_580NM_DIVISOR 			CH5_545NM_DIVISOR
#define CH6_585NM_DIVISOR 			CH5_550NM_DIVISOR
#define CH6_590NM_DIVISOR 			CH5_555NM_DIVISOR
#define CH6_595NM_DIVISOR 			CH5_560NM_DIVISOR
#define CH6_600NM_DIVISOR 			CH5_565NM_DIVISOR
#define CH6_605NM_DIVISOR 			CH5_570NM_DIVISOR
#define CH6_610NM_DIVISOR 			CH5_575NM_DIVISOR
#define CH6_615NM_DIVISOR 			CH5_580NM_DIVISOR
#define CH6_620NM_DIVISOR 			CH5_585NM_DIVISOR
#define CH6_625NM_DIVISOR 			CH5_590NM_DIVISOR
#define CH6_630NM_DIVISOR 			CH5_595NM_DIVISOR

/* channel7 divider */
#define CH7_580NM_DIVISOR 			0.01116917377487144
#define CH7_585NM_DIVISOR 			0.03325802043898785
#define CH7_590NM_DIVISOR 			0.0546039378837216
#define CH7_595NM_DIVISOR 			0.0747300935864242
#define CH7_600NM_DIVISOR 			0.09318690248616857
#define CH7_605NM_DIVISOR 			0.1095620699710928
#define CH7_610NM_DIVISOR 			0.1234898018587336
#define CH7_615NM_DIVISOR 			0.134658975633605
#define CH7_620NM_DIVISOR 			0.1428200904100806
#define CH7_625NM_DIVISOR 			0.1477908403698902
#define CH7_630NM_DIVISOR 			0.1494601871728485
#define CH7_635NM_DIVISOR 			CH7_625NM_DIVISOR
#define CH7_640NM_DIVISOR 			CH7_620NM_DIVISOR
#define CH7_645NM_DIVISOR 			CH7_615NM_DIVISOR
#define CH7_650NM_DIVISOR 			CH7_610NM_DIVISOR
#define CH7_655NM_DIVISOR 			CH7_605NM_DIVISOR
#define CH7_660NM_DIVISOR 			CH7_600NM_DIVISOR
#define CH7_665NM_DIVISOR 			CH7_595NM_DIVISOR
#define CH7_670NM_DIVISOR 			CH7_590NM_DIVISOR
#define CH7_675NM_DIVISOR 			CH7_585NM_DIVISOR
#define CH7_680NM_DIVISOR 			CH7_580NM_DIVISOR

/* channel8 divider */
#define CH8_630NM_DIVISOR 			CH7_580NM_DIVISOR
#define CH8_635NM_DIVISOR 			CH7_585NM_DIVISOR
#define CH8_640NM_DIVISOR 			CH7_590NM_DIVISOR
#define CH8_645NM_DIVISOR 			CH7_595NM_DIVISOR
#define CH8_650NM_DIVISOR 			CH7_600NM_DIVISOR
#define CH8_655NM_DIVISOR 			CH7_605NM_DIVISOR
#define CH8_660NM_DIVISOR 			CH7_610NM_DIVISOR
#define CH8_665NM_DIVISOR 			CH7_615NM_DIVISOR
#define CH8_670NM_DIVISOR 			CH7_620NM_DIVISOR
#define CH8_675NM_DIVISOR 			CH7_625NM_DIVISOR
#define CH8_680NM_DIVISOR 			CH7_630NM_DIVISOR
#define CH8_685NM_DIVISOR 			CH7_635NM_DIVISOR
#define CH8_690NM_DIVISOR 			CH7_640NM_DIVISOR
#define CH8_695NM_DIVISOR 			CH7_645NM_DIVISOR
#define CH8_700NM_DIVISOR 			CH7_650NM_DIVISOR
#define CH8_705NM_DIVISOR 			CH7_655NM_DIVISOR
#define CH8_710NM_DIVISOR 			CH7_660NM_DIVISOR
#define CH8_715NM_DIVISOR 			CH7_665NM_DIVISOR
#define CH8_720NM_DIVISOR 			CH7_670NM_DIVISOR
#define CH8_725NM_DIVISOR 			CH7_675NM_DIVISOR
#define CH8_730NM_DIVISOR 			CH7_680NM_DIVISOR

const double divide_2_11[] =
{
	CH1_390NM_DIVISOR,
	CH1_395NM_DIVISOR,
	CH1_400NM_DIVISOR,
	CH1_405NM_DIVISOR,
	CH1_410NM_DIVISOR,
	CH1_415NM_DIVISOR,
	CH1_420NM_DIVISOR,
	CH1_425NM_DIVISOR,
	CH1_430NM_DIVISOR,
	CH1_435NM_DIVISOR,
	CH1_440NM_DIVISOR,
};

const double divide_2_13[] =
{
	CH2_415NM_DIVISOR,
	CH2_420NM_DIVISOR,
	CH2_425NM_DIVISOR,
	CH2_430NM_DIVISOR,
	CH2_435NM_DIVISOR,
	CH2_440NM_DIVISOR,
	CH2_445NM_DIVISOR,
	CH2_450NM_DIVISOR,
	CH2_455NM_DIVISOR,
	CH2_460NM_DIVISOR,
	CH2_465NM_DIVISOR,
	CH2_470NM_DIVISOR,
	CH2_475NM_DIVISOR,
};

const double divide_2_15[] =
{
	CH3_445NM_DIVISOR,
	CH3_450NM_DIVISOR,
	CH3_455NM_DIVISOR,
	CH3_460NM_DIVISOR,
	CH3_465NM_DIVISOR,
	CH3_470NM_DIVISOR,
	CH3_475NM_DIVISOR,
	CH3_480NM_DIVISOR,
	CH3_485NM_DIVISOR,
	CH3_490NM_DIVISOR,
	CH3_495NM_DIVISOR,
	CH3_500NM_DIVISOR,
	CH3_505NM_DIVISOR,
	CH3_510NM_DIVISOR,
	CH3_515NM_DIVISOR,
};

const double divide_2_17[] =
{
	CH4_475NM_DIVISOR,
	CH4_480NM_DIVISOR,
	CH4_485NM_DIVISOR,
	CH4_490NM_DIVISOR,
	CH4_495NM_DIVISOR,
	CH4_500NM_DIVISOR,
	CH4_505NM_DIVISOR,
	CH4_510NM_DIVISOR,
	CH4_515NM_DIVISOR,
	CH4_520NM_DIVISOR,
	CH4_525NM_DIVISOR,
	CH4_530NM_DIVISOR,
	CH4_535NM_DIVISOR,
	CH4_540NM_DIVISOR,
	CH4_545NM_DIVISOR,
	CH4_550NM_DIVISOR,
	CH4_555NM_DIVISOR,
};

const double divide_2_21[] =
{
	CH8_630NM_DIVISOR,
	CH8_635NM_DIVISOR,
	CH8_640NM_DIVISOR,
	CH8_645NM_DIVISOR,
	CH8_650NM_DIVISOR,
	CH8_655NM_DIVISOR,
	CH8_660NM_DIVISOR,
	CH8_665NM_DIVISOR,
	CH8_670NM_DIVISOR,
	CH8_675NM_DIVISOR,
	CH8_680NM_DIVISOR,
	CH8_685NM_DIVISOR,
	CH8_690NM_DIVISOR,
	CH8_695NM_DIVISOR,
	CH8_700NM_DIVISOR,
	CH8_705NM_DIVISOR,
	CH8_710NM_DIVISOR,
	CH8_715NM_DIVISOR,
	CH8_720NM_DIVISOR,
	CH8_725NM_DIVISOR,
	CH8_730NM_DIVISOR,
};


const double value_e = 2.718281828;
const uint16_t lamda_value[9] = {410, 440, 470, 510, 550, 583, 620, 670, 750};
const double c_1 = (3.74183)*(1e-16);
const float c_2 = 0.014388;

/*410 440 470 510 550 583 620 670 750 NIR:900*/
const float _x_lamda[9] = \
{
    /*CIE 1931 standard color obsever match function x*/
    /*F1 ... F8 CLEAR (NIR out of range)*/
    0.435100, \
    0.348280, \
    0.195360, \
    0.009300, \
    0.433450, \
    0.978600, \
    0.854450, \
    0.087400, \
    0.000332
};

const float _x_lamda_sta[81] = \
{
    /*CIE 1931 standard color obsever match function x*/
	/*380 ~ 780*/
	0.001368, 0.002236, 0.004243, 0.007650, 0.014310, //380 ~ 400
	0.023190, 0.043510, 0.077630, 0.134380, 0.214770, //405 ~ 425
    0.283900, 0.328500, 0.343280, 0.348060, 0.336200, //430 ~ 450
    0.318700, 0.290800, 0.251100, 0.195360, 0.142100, //455 ~ 475
    0.095640, 0.057950, 0.032010, 0.014700, 0.004900, //480 ~ 500
    0.002400, 0.009300, 0.029100, 0.063270, 0.109600, //505 ~ 525
    0.165500, 0.225750, 0.290400, 0.359700, 0.433450, //530 ~ 550
    0.512050, 0.594500, 0.678400, 0.762100, 0.842500, //555 ~ 575
    0.916300, 0.978600, 1.026300, 1.056700, 1.062200, //580 ~ 600
    1.045600, 1.002600, 0.938400, 0.854450, 0.751400, //605 ~ 625
    0.642400, 0.541900, 0.447900, 0.360800, 0.283500, //630 ~ 650
    0.218700, 0.164900, 0.121200, 0.087400, 0.063600, //655 ~ 675
    0.046770, 0.032900, 0.022700, 0.015840, 0.011359, //680 ~ 700
    0.008111, 0.005790, 0.004109, 0.002899, 0.002049, //705 ~ 725
    0.001440, 0.001000, 0.000690, 0.000476, 0.000332, //730 ~ 750
    0.000235, 0.000166, 0.000117, 0.000083, 0.000059, //755 ~ 775
    0.000042                                          //780
};

const float _y_lamda[9] = \
{
    /*CIE 1931 standard color obsever match function y*/
    /*F1 ... F8 CLEAR (NIR out of range)*/
    0.001210,
    0.023000,
    0.090980,
    0.503000,
    0.994950,
    0.816300,
    0.381000,
    0.032000,
    0.000120
};

const float _y_lamda_sta[81] = \
{
    /*CIE 1931 standard color obsever match function y*/
    /*380 ~ 780*/
    0.000039, 0.000064, 0.000120, 0.000217, 0.000396, //380 ~ 400
    0.000640, 0.001210, 0.002180, 0.004000, 0.007300, //405 ~ 425
    0.011600, 0.016840, 0.023000, 0.029800, 0.038000, //430 ~ 450
    0.048000, 0.060000, 0.073900, 0.090980, 0.112600, //455 ~ 475
    0.139020, 0.169300, 0.208020, 0.258600, 0.323000, //480 ~ 500
    0.407300, 0.503000, 0.608200, 0.710000, 0.793200, //505 ~ 525
    0.862000, 0.914850, 0.954000, 0.980300, 0.994950, //530 ~ 550
    1.000000, 0.995000, 0.978600, 0.952000, 0.915400, //555 ~ 575
    0.870000, 0.816300, 0.757000, 0.694900, 0.631000, //580 ~ 600
    0.566800, 0.503000, 0.441200, 0.381000, 0.321000, //605 ~ 625
    0.265000, 0.217000, 0.175000, 0.138200, 0.107000, //630 ~ 650
    0.081600, 0.061000, 0.044580, 0.032000, 0.023200, //655 ~ 675
    0.017000, 0.011920, 0.008210, 0.005723, 0.004102, //680 ~ 700
    0.002929, 0.002091, 0.001484, 0.001047, 0.000740, //705 ~ 725
    0.000520, 0.000361, 0.000249, 0.000172, 0.000120, //730 ~ 750
    0.000085, 0.000060, 0.000042, 0.000030, 0.000021, //755 ~ 775
    0.000015                                          //780
};

const float _z_lamda[9] = \
{
    /*CIE 1931 standard color obsever match function z*/
    /*F1 ... F8 CLEAR (NIR out of range)*/
    0.207400,
    1.747060,
    1.287640,
    0.158200,
    0.008750,
    0.001400,
    0.000190,
    0.000000,
    0.000000
};

const float _z_lamda_sta[81] = \
{
    /*CIE 1931 standard color obsever match function z*/
    /*380 ~ 780*/
    0.006450, 0.010550, 0.020050, 0.036210, 0.067850, //380 ~ 400
    0.110200, 0.207400, 0.371300, 0.645600, 1.039050, //405 ~ 425
    1.385600, 1.622960, 1.747060, 1.782600, 1.772110, //430 ~ 450
    1.744100, 1.669200, 1.528100, 1.287640, 1.041900, //455 ~ 475
    0.812950, 0.616200, 0.465180, 0.353300, 0.272000, //480 ~ 500
    0.212000, 0.158200, 0.111700, 0.078250, 0.057250, //505 ~ 525
    0.042160, 0.029840, 0.020300, 0.013400, 0.008750, //530 ~ 550
    0.005750, 0.003900, 0.002750, 0.002100, 0.001800, //555 ~ 575
    0.001650, 0.001400, 0.001100, 0.001000, 0.000800, //580 ~ 600
    0.000600, 0.000340, 0.000240, 0.000190, 0.000100, //605 ~ 625
    0.000050, 0.000030, 0.000020, 0.000010, 0.000000, //630 ~ 650
    0.000000, 0.000000, 0.000000, 0.000000, 0.000000, //655 ~ 675
    0.000000, 0.000000, 0.000000, 0.000000, 0.000000, //680 ~ 700
    0.000000, 0.000000, 0.000000, 0.000000, 0.000000, //705 ~ 725
    0.000000, 0.000000, 0.000000, 0.000000, 0.000000, //730 ~ 750
    0.000000, 0.000000, 0.000000, 0.000000, 0.000000, //755 ~ 775
    0.000000                                          //780
};

/**
 * standard light source D feature vector
 *  
 * F1 ... F8 CLEAR NIR(out of range) 
 */

const float std_light_D_vec[][3] = \
{
    {104.800, 46.300, -0.500},
    {113.900, 36.700, -2.600},
    {121.300, 27.900, -2.600},
    {110.800, 13.200, -1.300},
    {104.400, 1.900, -0.300},
    {92.100, -3.500, 1.300},
    {88.400, -8.600, 4.700},
    {84.900, -14.000, 9.800},
    {65.200, -10.200, 6.700}
};


const float std_light_D_vec_sta[][3] = \
{
	{63.40, 38.50, 3.00}, {64.60, 36.75, 2.10}, {65.80, 35.00, 1.20}, {80.30, 39.20, 0.05}, 		//380~395
	{94.80, 43.40, -1.10}, {99.80, 44.85, -0.80}, {104.80, 46.30, -0.50}, {105.35, 40.50, -0.95}, 	//400~415
	{105.90, 43.90, -0.70}, {101.35, 40.50, -0.95}, {96.80, 37.10, -1.20}, {105.35, 36.90, -1.90}, 	//420~435
	{113.90, 36.70, -2.60}, {119.75, 36.30, -2.75}, {125.60, 35.90, -2.90}, {125.55, 34.25, -2.85}, //440~455
	{125.50, 32.60, -2.80}, {123.40, 30.25, -2.70}, {121.30, 27.90, -2.60}, {121.30, 26.10, -2.60}, //460~475
	{121.30, 24.30, -2.60}, {117.40, 22.20, -2.20}, {113.50, 20.10, -1.80}, {113.30, 18.15, -1.65}, //480~495
	{113.10, 16.20, -1.50}, {111.95, 14.70, -1.40}, {110.80, 13.20, -1.30}, {108.65, 10.90, -1.25}, //500~515
	{106.50, 8.60, -1.20}, {107.65, 7.35, -1.10}, {108.80, 6.10, -1.00}, {107.05, 5.15, -0.75}, 	//520~535
	{105.30, 4.20, -0.50}, {104.85, 3.05, -0.40}, {104.40, 1.90, -0.30}, {102.20, 0.95, -0.15}, 	//540~555
	{100.00, 0.00, 0.00}, {98.00, -0.80, 0.10}, {96.00, -1.60, 0.20}, {95.55, -2.55, 0.35}, 		//560~575
	{95.10, -3.50, 0.50}, {92.10, -3.50, 1.30}, {89.10, -3.50, 2.10}, {89.80, -4.65, 2.65}, 		//580~595
	{90.50, -5.80, 3.20}, {90.40, -6.50, 3.65}, {90.30, -7.20, 4.10}, {89.35, -7.90, 4.40}, 		//600~615
	{88.40, -8.60, 4.70}, {86.20, -9.05, 4.90}, {84.00, -9.50, 5.10}, {84.55, -10.20, 5.90}, 		//620~635
	{85.10, -10.90, 6.70}, {83.50, -10.80, 7.00}, {81.90, -10.70, 7.30}, {82.25, -11.35, 7.95}, 	//640~655
	{82.60, -12.00, 8.60}, {83.75, -13.00, 9.20}, {84.90, -14.00, 9.80}, {83.10, -13.80, 10.00}, 	//660~675
	{81.30, -13.60, 10.20}, {76.60, -12.80, 9.25}, {71.90, -12.00, 8.30}, {73.10, -12.65, 8.95}, 	//680~695
	{74.30, -13.30, 9.60}, {75.35, -13.10, 9.05}, {76.40, -12.90, 8.50}, {69.85, -11.75, 7.75}, 	//700~715
	{63.30, -10.60, 7.00}, {67.50, -11.10, 7.30}, {71.70, -11.60, 7.60}, {74.35, -11.90, 7.80}, 	//720~735
	{77.00, -12.20, 8.00}, {71.10, -11.20, 7.35}, {65.20, -10.20, 6.70}, {56.45, -9.00, 5.95}, 		//740~755
	{47.70, -7.80, 5.20}, {58.15, -9.50, 6.30}, {68.60, -11.20, 7.40}, {66.80, -10.80, 7.10}, 		//760~775
	{65.00, -10.40, 6.80}																			//780
};

const float vis_reflect_table[][8] = \
{
    {0.252, 0.118, 0.074, 0.124, 0.319, 0.492, 0.559, 0.462}, //410
    {0.230, 0.123, 0.073, 0.144, 0.346, 0.544, 0.544, 0.462}, //440
    {0.216, 0.138, 0.085, 0.229, 0.403, 0.541, 0.448, 0.382}, //470
    {0.226, 0.242, 0.241, 0.390, 0.403, 0.414, 0.301, 0.283}, //510
    {0.253, 0.282, 0.400, 0.341, 0.331, 0.279, 0.259, 0.254}, //550
    {0.367, 0.339, 0.299, 0.229, 0.247, 0.222, 0.259, 0.284}, //583
    {0.450, 0.341, 0.241, 0.160, 0.185, 0.223, 0.377, 0.528}, //620
    {0.453, 0.332, 0.230, 0.151, 0.180, 0.278, 0.462, 0.705}, //670
    {0.467, 0.320, 0.493, 0.177, 0.203, 0.425, 0.553, 0.730}  //750
};

const uint16_t delta_lambda[9] =
{
		30, 30, 40, 40, 33, 37, 50, 80, 50
};

#endif // !
