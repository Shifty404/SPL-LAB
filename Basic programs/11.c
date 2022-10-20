#include <stdio.h>

int main()
{
    float radius, area, pi = 3.14159265359;
    
    printf("Radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area: %f\n", area);
    return 0;
}