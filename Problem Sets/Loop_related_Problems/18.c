#include <stdio.h>

int main()
{
    int number, result, temp;

    printf("Enter number: ");
    scanf(" %d", &number);

    temp = number;

    while (temp != 0)
    {
        result = result * 10 + (temp % 10);
        temp /= 10;
    }

    if (result == number)
        printf("Yes!");
    else
        printf("No!");

    return 0;
}