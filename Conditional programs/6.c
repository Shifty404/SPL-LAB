#include <stdio.h>

int main()
{
    char character;

    printf("Character: ");
    scanf(" %c", &character);

    printf("It is %s", ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) ? "alphabet!" : "not alphabet!");
    return 0;
}