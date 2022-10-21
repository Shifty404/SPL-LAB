#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    printf("Number 3: ");
    scanf(" %d", &number3);

    if (number1 >= number3 && number1 >= number3)
        printf("Number 1: %d is the largest number.", number1);
    else if (number2 >= number1 && number2 >= number3)
        printf("Number 2: %d is the largest number.", number2);
    else if (number3 >= number1 && number3 >= number2)
        printf("Number 3: %d is the largest number.", number3);
    return 0;
}