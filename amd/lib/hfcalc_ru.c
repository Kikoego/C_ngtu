
#include <stdio.h>
#include "hfcalc.h"

void display_calories(float weight, float distance, float coeff) {
    printf("Weight: %3.2f lbs\n", weight);
    printf("Distance: %3.2f Килограммы\n", distance);
    printf("Calories burned: %4.2f cal\n", coeff * weight * distance);
}