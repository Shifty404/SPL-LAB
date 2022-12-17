#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            scanf("%d", &k);
            arr[i][j] = k;
        }
    }

    printf("Row-wise: ");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    printf("\nCounter-wise: ");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}