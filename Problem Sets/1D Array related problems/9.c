#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n], b[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array A: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[n - i - 1];
    }

    printf("\nArray B: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
