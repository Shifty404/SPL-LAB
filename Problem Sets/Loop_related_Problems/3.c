#include<stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d:", &number);

    for(int i = 1; i <= number; i++)
    {
        if(i % 2 == 0)
            printf("0", i);
        else
            printf("1", i);
        if(i != number)
            printf(", ");

    }

    return 0;
}
