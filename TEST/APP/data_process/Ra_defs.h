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


#define ATIME 100
#define ASTEP 999
#define AGAIN 6
#define GAIN (pow(2, AGAIN))
#define ITIME ((ATIME + 1) * (ASTEP + 1) * 2.78)

const float value_e = 2.718281828;
const uint16_t lamda_value[9] = {410, 440, 470, 510, 550, 583, 620, 670, 750};
const float c_1 = (3.74183)*(10^(-16));
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

#endif // !
