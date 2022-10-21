#include <stdio.h>

int main()
{
    int number1, number2, temp;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    printf("number1 = %d & number2 = %d\n", number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("number1 = %d & number2 = %d", number1, number2);
    return 0;
}