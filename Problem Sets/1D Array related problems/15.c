#include <stdio.h>

int main()
{
    int i, j, n, m;

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

    i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            printf("%d ", a[i++]);
        else if (b[j] < a[i])
            printf("%d ", b[j++]);
        else
            printf("%d ", a[i]);
        i++;
    }

    return 0;
}