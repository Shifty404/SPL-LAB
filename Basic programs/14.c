#include <stdio.h>

int main()
{
    int days, years, weeks;
    
    printf("Days: ");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Day of the week: %d", days);
    return 0;
}