#include <stdio.h>

void menu()
{
    printf("1. While\n");
    printf("2. For\n");
}

int main()
{
    int choice, number, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    menu();

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        while (number > 0)
        {
            reverse = reverse * 10;
            reverse = reverse + number % 10;
            number = number / 10;
        }

        printf("Reverse number using while loop: %d", reverse);
        break;

    case 2:
        for (reverse = 0; number > 0; number = number / 10)
        {
            reverse = reverse * 10;
            reverse = reverse + number % 10;
        }

        printf("Reverse number using for loop = %d", reverse);
        break;

    default:
        break;
    }

    return 0;
}