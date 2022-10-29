#include <stdio.h>

int main()
{
    int num;

    printf("Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Type: Even!");
    else
        printf("Type: Odd!");

    return 0;
}