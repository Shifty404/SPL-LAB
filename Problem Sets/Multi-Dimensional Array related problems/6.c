#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);

    int arr1[m][n], arr2[m][n], arr3[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            scanf("%d", &k);
            arr1[i][j] = k;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            scanf("%d", &k);
            arr2[i][j] = k;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}