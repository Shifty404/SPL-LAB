#include <stdio.h>

int main()
{
    char character;

    printf("Charater: ");
    scanf(" %c", &character);

    printf("The character is %s", (character >= 'a' && character <= 'z') ? "a lowercase alphabet!" : (character >= 'A' && character <= 'Z') ? "a uppercase alphabet!" : "not a alphabet!");
    return 0;
}