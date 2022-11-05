#include <stdio.h>

int main()
{
    int i, number, result = 1;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d!= ", number);

    for (i = number; i >= 1; i--)
    {
        printf("%d ", i);
        if (i != 1)
            printf("X ", i);
        
        result *= i;
    }

    printf("= %d", result);

    return 0;
}