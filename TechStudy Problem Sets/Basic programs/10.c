#include <stdio.h>

int main()
{
    char character;

    printf("Character: ");
    scanf(" %character", &character);

    printf("ASCII: %d", character);
    return 0;
}