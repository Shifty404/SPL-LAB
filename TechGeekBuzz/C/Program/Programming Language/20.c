#include <stdio.h>

int main()
{
    int i, s, r, k = 0, c1 = 0, c2 = 0;

    printf("Enter row: ");
    scanf("%d", &r);

    for (i = 1; i <= r; ++i)
    {
        for (s = 1; s <= r - i; ++s)
        {
            printf("  ");
            ++c1;
        }
        
        while (k != 2 * i - 1)
        {
            if (c1 <= r - 1)
            {
                printf("%d ", i + k);
                ++c1;
            }
            else
            {
                ++c2;
                printf("%d ", (i + k - 2 * c2));
            }
            ++k;
        }

        c2 = c1 = k = 0;
        printf("\n");
    }
    
    return 0;
}