#include <stdio.h>

int main()
{
    int i, number1, number2, maximum, LCM = 1;

    printf("Enter two numbers: ");
    scanf(" %d %d", &number1, &number2);

    maximum = (number1 > number2) ? number1 : number2;
    i = maximum;

    while (1)
    {
        if (i % number1 == 0 && i % number2 == 0)
        {
            LCM = i;
            break;
        }
        i += maximum;
    }

    printf("LCM of %d and %d is %d", number1, number2, LCM);

    return 0;
}