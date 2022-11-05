#include <stdio.h>

int main()
{
    int i = 1;
    char choice;

    do
    {
        scanf(" %c", &choice);
        if (choice == 'A')
            break;
        else
        {
            printf("Input %d: %c\n", i, choice);
            i++;
        }
    } while (1);

    return 0;
}