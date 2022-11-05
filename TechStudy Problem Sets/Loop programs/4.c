#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}