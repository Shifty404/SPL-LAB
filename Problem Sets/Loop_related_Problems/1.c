#include<stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d:", &number);

    for(int i = 1; i <= number; i++)
    {
        printf("%d", i);
        if(i != number)
            printf(",");
    }

    return 0;
}
