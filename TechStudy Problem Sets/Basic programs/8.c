#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Fahrenheit: ");
    scanf(" %f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius: %f", celsius);
    return 0;
}