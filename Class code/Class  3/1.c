#include <stdio.h>

int main()
{
    int choice, sumation = 0;

    printf("Enter choice: ");
    scanf("%d", &choice);

    for (int i = 1; i <= choice; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf(" + ");
            sumation += i;
        }
        else
        {
            printf("%d", i);
            printf(" * ");
            sumation *= i;
        }
    }

    printf("\nTotal: %d", sumation);

    return 0;
}
