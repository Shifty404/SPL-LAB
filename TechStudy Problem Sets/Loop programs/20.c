#include <stdio.h>

int main()
{
    int number, n = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        n = (n * 10) + (number % 10);
        number /= 10;
    }

    while (n != 0)
    {
        switch (n % 10)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
        n = n / 10;
    }

    return 0;
}