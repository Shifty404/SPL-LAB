#include <stdio.h>

int main()
{
    int choice, number = 3, i = 0;

    printf("How much number: ");
    scanf(" %d", &choice);

    while (i < choice)
    {
        printf("%d", number);
        if (i != choice - 1)
            printf(", ");
        number += 3;
        i++;
    }
    
    return 0;
}