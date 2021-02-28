#ifndef BIKE_STORE_H
#define BIKE_STORE_H

#include <stdint.h>

typedef struct
{
    uint16_t speed;
    uint16_t heart_rate;
    uint16_t cadence;
    uint16_t power;
} bike_store_measurement;

uint16_t bike_store_get_number_of_measurements_present();

void bike_store_add_measurement(bike_store_measurement value);

bike_store_measurement bike_store_get_measurement(uint16_t index_position);

#endif