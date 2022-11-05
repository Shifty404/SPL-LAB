#include <stdio.h>

int main()
{
    int i, number, result = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
            result -= i;
        else
            result += i;
    }

    printf("Result: %d", result);

    return 0;
}