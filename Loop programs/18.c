#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
        printf("%d is a Prime Number!", number);
    else
        printf("%d is a Not Prime Number!", number);

    return 0;
}