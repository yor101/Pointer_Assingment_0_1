#include "conversion.h"
#include <stdint.h>
#include <stdio.h>

double const Feet = 30.48;
double const Inch = 2.54;

void metricToImperial(int lengthCm, int *feet, int *remaininches){

    // conversion from cm to feet
    *feet = lengthCm / Feet;
    *remaininches = (lengthCm-5*Feet)/Inch;

}