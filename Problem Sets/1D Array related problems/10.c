#include <stdio.h>

int main()
{
    int i, n, m;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter m: ");
    scanf("%d", &m);

    int b[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int A[m], B[n];

    for (i = 0; i < n; i++)
    {
        B[i] = a[i];
    }

    for (i = 0; i < m; i++)
    {
        A[i] = b[i];
    }

    printf("Array A: ");

    for (i = 0; i < m; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nArray B: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}
