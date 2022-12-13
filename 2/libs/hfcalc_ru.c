#include <stdio.h>
#include "hfcalc.h"

void display_calories(float weight, float distance, float coeff) {
    printf("Weight: %3.2f кг:\n", weight);
    printf("Distance: %3.2f км:\n", distance);
    printf("Calories burned: %4.2f cal\n", coeff * weight * distance);
}