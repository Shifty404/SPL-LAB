#include <stdio.h>
int main()
{
    int number, sumation = 0, r;

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = number; i > 0; i = i / 10)
    {
        r = i % 10;
        sumation = sumation + r * r * r;
    }

    if (number == sumation)
    {
        printf("%d is an armstrong number.", number);
    }
    else
    {
        printf("%d is not an armstrong number.", number);
    }

    return 0;
}