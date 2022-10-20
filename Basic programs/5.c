#include <stdio.h>

int main()
{
    int a, b, sumation, substraction, multiplication, modulus;
    float division;

    printf("Number 1: ");
    scanf(" %d", &a);

    printf("Number 2: ");
    scanf(" %d", &b);

    sumation = a + b;
    substraction = a - b;
    multiplication = a * b;
    modulus = a % b;
    division = (float)a / b;

    printf("Sumation = %d\n", sumation);
    printf("Substration = %d\n", substraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Modulus = %d\n", modulus);
    printf("Division = %f\n", division);

    return 0;
}