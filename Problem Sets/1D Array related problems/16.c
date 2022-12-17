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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (b[j] == a[i])
            {
                for (int k = i; k <n; k++ ){
                    a[k] = a[k+1];
                }
                n--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}