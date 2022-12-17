#include <stdio.h>

int main()
{
    int i, n, m;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);

        if (m % 3 == 0)
            a[i] = -1;
        else
            a[i] = m;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}