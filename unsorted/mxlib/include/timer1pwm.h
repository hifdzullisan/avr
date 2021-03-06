/*
 *      timer1pwm.h
 *      
 *      Copyright 2009 Nathaniel Robert Lewis <linux.robotdude@gmail.com>
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 * 
 *      This header controls timer 1 pwm functions
 * 
 */

#ifndef _TIMER_1_PWM
#define _TIMER_1_PWM 1

#include <avr/io.h>
#include <stdio.h>

//the prescalers for timer 1 and their bit values
#define T1_PRESCALER_1 (1 << CS10)                        //fosc / 1
#define T1_PRESCALER_8 (1 << CS11)                        //fosc / 8
#define T1_PRESCALER_64 (1 << CS11) | (1 << CS10)         //fosc / 64
#define T1_PRESCALER_256 (1 << CS12)                      //fosc / 256
#define T1_PRESCALER_1024 (1 << CS12) | (1 << CS10)       //fosc / 1024

//the predefined PWM types
#define T1_PWM_8BIT 255
#define T1_PWM_9BIT 511
#define T1_PWM_10BIT 1023
#define T1_PWM_11BIT 2047
#define T1_PWM_12BIT 4095

void init_timer1_pwm ( uint8_t prescaler, uint16_t top, uint8_t invert );

void set_pwm_1a ( uint16_t value );

void set_pwm_1b ( uint16_t value );

#endif
