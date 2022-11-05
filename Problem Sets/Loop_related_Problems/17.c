#include <stdio.h>

int main()
{
    int number, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number == 0 || number == 1)
        flag = 1;
    else
    {
        for (i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    
    if (flag == 0)
        printf("%d is a prime number.", number);
    else
        printf("%d is not a prime number.", number);

    return 0;
}