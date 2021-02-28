#ifndef BIKE_MEASURE_H
#define BIKE_MEASURE_H

#include <stdint.h>

uint16_t bike_measure_speed_in_kmh();

uint16_t bike_measure_power_in_watt();

uint16_t bike_measure_cadence_in_rpm();

uint16_t bike_measure_heart_rate_in_bpm();

#endif