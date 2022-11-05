#include<stdio.h>

int main()
{
    int choice;
    double sumation = 0, number, average;

    printf("Enter choice: ");
    scanf("%d:", &choice);

    for(int i = 1; i <= choice; i++)
    {
        scanf(" %lf", &number);
        sumation += number;
    }

    average = sumation / choice;

    printf("AVf of %d inputs: %lf", choice, average);

    return 0;
}
