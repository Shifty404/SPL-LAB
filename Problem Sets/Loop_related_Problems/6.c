#include <stdio.h>

int main()
{

    int x, y, n;

    printf("Enter Player-1 choice number: ");
    scanf(" %d", &x);

    printf("Enter tries number: ");
    scanf(" %d", &n);

    while (n != 0)
    {
        n--;

        printf("Guess the number: ");
        scanf(" %d", &y);

        if (y == x)
            printf("Right, Player-2 wins!\n");
        else if (n == 0)
            printf("Player-1 wins!\n");
        else
            printf("Wrong, %d Choice(s) Left!\n", n);
    }

    return 0;
}