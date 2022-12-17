#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d ", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == 0 || i == j || i == n - j + 1 || i == n - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("Sum: %d", sum);

    return 0;
}