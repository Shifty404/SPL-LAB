#include <stdio.h>

int main()
{
    int number, rev, i;

    printf("Enter any number: ");
    scanf("%d", &number);

    rev = number;
    for (i = 0; number > 0; number = number / 10)
    {
        i *= 10;
        i += number % 10;
    }

    if (rev == i)
        printf("%d is Palindrome Number!", rev);
    else
        printf("%d is not a Palindrome Number!", rev);
    return 0;
}