#include <stdio.h>

int main()
{
    int n, m, maxRow, maxCol, max = -999999;
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Max: %d", max);
    printf("\nLocation: [%d][%d]", maxRow, maxCol);

    return 0;
}