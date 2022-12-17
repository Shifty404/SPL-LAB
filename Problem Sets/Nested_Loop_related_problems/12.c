#include <stdio.h>

int main()
{
    int i, j, rows, stars, spaces;

    printf("Enter rows: ");
    scanf("%d", &rows);

    stars = 1;
    spaces = rows - 1;

    for (i = 1; i < rows * 2; i++)
    {
        for (j = 1; j <= spaces; j++)
        {
            printf("_");
        }

        for (j = 1; j < stars * 2; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}