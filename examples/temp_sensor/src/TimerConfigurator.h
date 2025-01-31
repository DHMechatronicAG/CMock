/* =========================================================================
    CMock - Automatic Mock Generation for C
    ThrowTheSwitch.org
    Copyright (c) 2007-25 Mike Karlesky, Mark VanderVoord, & Greg Williams
    SPDX-License-Identifier: MIT
========================================================================= */

#ifndef _TIMERCONFIGURATOR_H
#define _TIMERCONFIGURATOR_H

#include "Types.h"

void Timer_EnablePeripheralClocks(void);
void Timer_Reset(void);
void Timer_ConfigureMode(void);
void Timer_ConfigurePeriod(void);
void Timer_EnableOutputPin(void);
void Timer_Enable(void);
void Timer_ConfigureInterruptHandler(void);
void Timer_Start(void);

#endif // _TIMERCONFIGURATOR_H
