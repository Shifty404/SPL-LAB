#include <stdio.h>
#include <math.h>

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int x, i, expodent = 1;
    double result = 0;

    printf("Enter x: ");
    scanf(" %d", &x);

    for (i = 1; i <= 2; i++)
    {
        if (i % 2 == 0)
            result = result - (pow(x, expodent) / fact(expodent));
        else
            result = result + (pow(x, expodent) / fact(expodent));
        expodent = expodent + 2;
    }

    printf("%lf", result);

    return 0;
}