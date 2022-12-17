#include <stdio.h>

int main()
{
    int n = 3;

    int arr1[n][n], arr2[n][n], arr3[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            scanf("%d", &k);
            arr2[i][j] = k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}