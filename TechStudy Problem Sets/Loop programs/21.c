#include <stdio.h>

int main()
{
    int number1, number2, minimum, HCF = 1;

    printf("Enter two numbers: ");
    scanf(" %d %d", &number1, &number2);

    minimum = (number1 < number2) ? number1 : number2;

    for (int i = 1; i <= minimum; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            HCF = i;
        }
    }

    printf("HCF of %d and %d is %d\n", number1, number2, HCF);

    return 0;
}