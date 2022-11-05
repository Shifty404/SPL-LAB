#include <stdio.h>
#include <math.h>

int main()
{
    int i, number, result = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        result += (pow(i, 2) * (i + 1));
    }

    printf("Result: %d", result);

    return 0;
}