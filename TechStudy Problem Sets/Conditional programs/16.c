#include <stdio.h>

int main()
{
    int month;
    char monthArray[][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char daysAraay[][10] = {"31", "28 or 29", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"};

    printf("Enter month number(1 - 12): ");
    scanf("%d", &month);

    printf("The month is: %s and the month has %s days.", monthArray[month - 1], daysAraay[month -1]);
    
    return 0;
}