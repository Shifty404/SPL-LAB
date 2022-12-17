#include <stdio.h>
int main()
{
    int row, i, j;

    printf("Enter row: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == 1 || j == row - i + 1 || i == j || j == row)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}