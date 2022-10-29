#include <stdio.h>

int main()
{
    int choice, number, sumation = 0;

    printf("How much number: ");
    scanf(" %d", &choice);

    for (int i = 0; i < choice; i++)
    {

        printf("Enter number: ");
        scanf(" %d", &number);
        sumation += number;
    }

    printf("\nSumation: %d\n", sumation);
    printf("\nAverage: %.2f\n", (float)sumation / choice);
    
    return 0;
}
