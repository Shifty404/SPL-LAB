#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Celsius: ");
    scanf(" %f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("Fahrenheit: %f", fahrenheit);
    return 0;
}