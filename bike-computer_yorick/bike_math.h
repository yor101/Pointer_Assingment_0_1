#ifndef BIKE_MATH_H
#define BIKE_MATH_H

#include "bike_store.h"

#include <stdio.h>
#include <stdint.h>

typedef enum {
    BIKE_SPEED,
    BIKE_HEART_RATE,
    BIKE_CADENCE,
    BIKE_POWER
} bike_data_type;


uint16_t bike_math_calculate_min_value(bike_data_type data_type);

uint16_t bike_math_calculate_max_value(bike_data_type data_type);

uint16_t bike_math_calculate_average_value(bike_data_type data_type);

#endif