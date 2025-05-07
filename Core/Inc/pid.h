/*
 * pid.h
 *
 *  Created on: May 7, 2025
 *      Author: heinrich
 */

#ifndef INC_PID_H_
#define INC_PID_H_

typedef struct __PID_TypeDef
{
	float pGain;
	float iGain;
	float dGain;
	int16_t iState;
	int16_t dState;
	int16_t iMin;
	int16_t iMax;
	uint32_t pwmMin;
	uint32_t pwmMax;
} PID_TypeDef;

#endif /* INC_PID_H_ */
