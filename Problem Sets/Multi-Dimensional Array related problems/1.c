#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, i, j;
    scanf("%d", &n);

    m = sqrt(n);

    int arr[m][m];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &n);
            arr[i][j] = n;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}