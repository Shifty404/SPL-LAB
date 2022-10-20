#include <stdio.h>

int main()
{
    float feet, meter;

    printf("Feet: ");
    scanf(" %f", &feet);

    meter = feet / 3.28084;

    printf("Meter: %f", meter);
    return 0;
}