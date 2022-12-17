#include <stdio.h>

int main()
{
    int i, j;
    char chracter, alphabet = 'A';

    printf("Enter last char: ");
    scanf(" %c", &chracter);

    for (i = 1; i <= (chracter - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        
        ++alphabet;
        printf("\n");
    }

    return 0;
}