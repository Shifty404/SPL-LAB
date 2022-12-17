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

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                for (int o = j + 1; o < n; o++)
                {
                    if (arr[k][o] == arr[i][j])
                    {
                        arr[i][j] = -1;
                    }
                }
            }
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