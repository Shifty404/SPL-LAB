#include <stdio.h>

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
    int n, r, ncr;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    ncr = fact(n) / (fact(r) * fact(n - r));

    printf("Value of %dC%d = %d\n", n, r, ncr);

    return 0;
}
