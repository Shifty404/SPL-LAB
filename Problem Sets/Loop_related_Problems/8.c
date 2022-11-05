#include <stdio.h>

int main()
{
    int number, reminder;

    printf("Enter number: ");
    scanf(" %d", &number);

    while (number != 0)
    {
        reminder = number % 10;
        printf("%d", reminder);
        number = number / 10;
    }
    
    return 0;
}