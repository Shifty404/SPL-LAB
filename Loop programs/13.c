#include <stdio.h>

void menu()
{
    printf("1. While\n");
    printf("2. For\n");
}

int main()
{
    int number, power, choice, result = 1, i = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Enter power: ");
    scanf("%d", &power);

    menu();
    
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        while (i < power)
        {
            result = result * number;
            i++;
        }
        printf("Result : %d", result);
        break;

    case 2:
        for (i = 0; i < power; i++)
            result = result * number;
        printf("Result : %d", result);
        break;

    default:
        break;
    }

    return 0;
}