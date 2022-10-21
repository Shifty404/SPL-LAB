#include <stdio.h>

int main()
{
    char character;

    printf("Charater: ");
    scanf(" %c", &character);

    printf("The character is %s", (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') ? "a vowel!" : " a consonant!");
    return 0;
}