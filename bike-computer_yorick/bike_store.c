#include "bike_store.h"
#include <stdint.h>

#define BIKE_STORE_MAX_NUMBER_MEASUREMENTS (32)

uint16_t bike_store_number_of_measurements_present = 0;

bike_store_measurement bike_store_array[BIKE_STORE_MAX_NUMBER_MEASUREMENTS] = {
    { 0, },
};

uint16_t bike_store_get_maximum_bike_store_size()
{
    return BIKE_STORE_MAX_NUMBER_MEASUREMENTS;
}

uint16_t bike_store_get_number_of_measurements_present()
{
    return bike_store_number_of_measurements_present;
}

void bike_store_add_measurement(bike_store_measurement value)
{
    if (bike_store_number_of_measurements_present >=
        bike_store_get_maximum_bike_store_size())
    {
        bike_store_number_of_measurements_present = 0;
    }
}

bike_store_measurement bike_store_get_measurement(uint16_t index_position)
{
    bike_store_measurement value = bike_store_array[index_position];

    return value;
}



