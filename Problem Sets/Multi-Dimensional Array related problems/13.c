#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n][n];
    int arr2[n][n];

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
            arr2[j][i] = arr1[i][j];
        }
    }

    int symeetric = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                symeetric = 0;
                break;
            }
        }
    }

    if (symeetric == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}