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
#ifndef __RA_CALCULATE_H__
#define __RA_CALCULATE_H__

#include "Waveshare_AS7341.h"
#include "math.h"
#include "test.h"
#include "DEV_Config.h"

typedef struct __light_attrib
{
    uint16_t cdc;
    float spectral[10],
	  spectral_sta[81],
	  param_u,
	  param_v,
	  tri_X, tri_Y,
	  tri_Z,
	  param_c,
	  param_d;
}light_attrib_t;


typedef struct __light
{
    sModeOneData_t *pdata1; //raw value pointer
    sModeTwoData_t *pdata2; //raw value pointer

    light_attrib_t light_attrs;
    float Ra;
}light_t;


int Calcute_Ra(light_t *handle);
void My_Getdata_test(light_t *handle);
void Device_Init(void);
UWORD TemCalculate(light_t *handle);

#endif
