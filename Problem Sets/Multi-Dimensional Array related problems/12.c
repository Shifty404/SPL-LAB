#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i <= m/2; i++)
    {
        for (int j = 0; j <= n/2; j++)
        {
            int temp;
            temp = arr[i][j] ;
            arr[i][j] = arr[i][n - j - 1];
            arr[i][n - j - 1] = temp;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}