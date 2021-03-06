/*!
 * Copyright (c) 2019 TUXEDO Computers GmbH <tux@tuxedocomputers.com>
 *
 * This file is part of TUXEDO Control Center.
 *
 * TUXEDO Control Center is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TUXEDO Control Center is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TUXEDO Control Center.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * TUXEDO Fan API
 */
#ifndef TUXEDO_FAN_API
#define TUXEDO_FAN_API

#include <math.h>
#include "tuxedo_ec_io.h"

#define FAN_CPU     1
#define FAN_GPU1    2
#define FAN_GPU2    3

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Set auto fan control for specified fan
 * 
 * Returns EC_SUCCESS on success, otherwise EC_ERROR
 */
int set_fan_auto(int __fan_number);

/**
 * Set fan control speed for specified fan
 * 
 * Returns EC_SUCCESS on success, otherwise EC_ERROR
 */
int set_fan_speed(int __fan_number, int __fan_speed);

/**
 * Get temperature of sensor for specified fan
 * 
 * Returns the temperature
 */
int get_fan_temperature(int __fan_number);

/**
 * Get speed for specified fan in percent
 * 
 * Returns the speed in percent
 */
int get_fan_speed_percent(int __fan_number);

/**
 * Get speed for specified fan in rpm
 * 
 * Returns the speed in percent
 */
int get_fan_speed_rpm(int __fan_number);

#ifdef __cplusplus
}
#endif

#endif
