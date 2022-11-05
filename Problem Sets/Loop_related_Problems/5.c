#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, square;

    printf("Enter two numbers: ");
    scanf(" %d %d", &x, &y);

    if (x < y)
    {
        for (int i = x; i < y; i++)
        {
            square = pow(i, 2);
            printf("%d, ", square);
        }
        printf("Reached!");
    }
    else if (x > y)
    {
        for (int i = x; i > y; i--)
        {
            square = pow(i, 2);
            printf("%d, ", square);
        }
        printf("Reached!");
    }
    else
        printf("Reached!");

    return 0;
}