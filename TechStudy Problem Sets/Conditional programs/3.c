#include <stdio.h>

int main()
{
    int number1, number2, number3, largeNumber;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    printf("Number 3: ");
    scanf(" %d", &number3);

    largeNumber = number1 >= number2 ? (number1 >= number3 ? number1 : number3) : (number2 >= number3 ? number2 : number3);

    printf("%d is the largest number.", largeNumber);

    return 0;
}