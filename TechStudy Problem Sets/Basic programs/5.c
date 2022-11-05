#include <stdio.h>

int main()
{
    int number1, number2, sumation, substraction, multiplication, modulus;
    float division;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    sumation = number1 + number2;
    substraction = number1 - number2;
    multiplication = number1 * number2;
    modulus = number1 % number2;
    division = (float)number1 / number2;

    printf("Sumation = %d\n", sumation);
    printf("Substration = %d\n", substraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Modulus = %d\n", modulus);
    printf("Division = %f\n", division);

    return 0;
}