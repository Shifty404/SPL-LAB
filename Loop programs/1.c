#include <stdio.h>

int main()
{
    printf("Alphabets from a - z are:\n");
    for (char character = 'a'; character <= 'z'; character++)
    {
        printf("%c ", character);
    }

    return 0;
}