#include<stdio.h>

int main()
{
    int number, temp = 1;

    printf("Enter number: ");
    scanf("%d:", &number);

    for(int i = 1; i <= number; i++)
    {
        printf("%d", temp);
        if(i != number)
            printf(",");
        temp += 2;
    }

    return 0;
}
