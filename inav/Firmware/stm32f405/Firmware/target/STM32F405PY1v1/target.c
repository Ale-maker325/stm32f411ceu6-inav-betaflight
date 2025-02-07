/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {

#if !(defined(STM32F405PY1v1_allUART)) // && !(defined(STM32F405PY1v1_mpu6050_allUART))

    DEF_TIM(TIM5, CH1, PA0,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S1 D1_ST2
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S2 D1_ST4
    DEF_TIM(TIM2, CH3, PA2,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S3 D1_ST1
    DEF_TIM(TIM2, CH4, PA3,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 1), // S4 D1_ST6

    DEF_TIM(TIM1, CH2N, PB0,  TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 0), // S5
    DEF_TIM(TIM1, CH3N, PB1,  TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 1), // S6

    DEF_TIM(TIM8, CH2N, PB14, TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 0), // S7
    DEF_TIM(TIM8, CH3N, PB15, TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 1), // S8

    // DEF_TIM(TIM2, CH1,  PA15, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S9 D1_ST5
    // DEF_TIM(TIM2, CH2,  PB3,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S10 D1_ST6

    DEF_TIM(TIM3, CH1,  PB4,  TIM_USE_PPM, 0, 0), //

#else

    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S1
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S2

    DEF_TIM(TIM8, CH2N, PB14, TIM_USE_MC_SERVO |  TIM_USE_FW_SERVO, 0, 0), // S3
    DEF_TIM(TIM8, CH3N, PB15, TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 1), // S4

    DEF_TIM(TIM2, CH1,  PA15, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S5
    DEF_TIM(TIM2, CH2,  PB3,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S6

#endif

    // DEF_TIM(TIM3, CH1,  PB4,  TIM_USE_PPM, 0, 0), //
    //DEF_TIM(TIM2, CH1,  PA15, TIM_USE_LED, 0, 0), //

    // DEF_TIM(TIM1, CH1, PA8,  TIM_USE_ANY,   0, 0), //softserial_rx1
    // DEF_TIM(TIM1, CH3, PB1,  TIM_USE_ANY,   0, 0), //softserial_tx1

};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
