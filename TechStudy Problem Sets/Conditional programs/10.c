#include <stdio.h>

int main()
{
    char character;

    printf("Charater: ");
    scanf(" %c", &character);

    printf("The character is %s", ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) ? "an alphabet!" : (character >= '0' && character <= '9') ? "a digit!"
                                                                                                                                                                               : "a special character!");

    return 0;
}