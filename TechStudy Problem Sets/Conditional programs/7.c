#include <stdio.h>

int main()
{
    int number;

    printf("Number: ");
    scanf(" %d", &number);

    printf("The number is %s", ((number > 0) ? "Positive" : (number < 0) ? "Negative"
                                                                         : "Zero"));
    return 0;
}