#include <stdio.h>

int main()
{
    int number, sumation = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i += 2)
    {
        sumation += i;
    }
    printf("Sumation of all even number between 1 to %d is %d", number, sumation);

    return 0;
}