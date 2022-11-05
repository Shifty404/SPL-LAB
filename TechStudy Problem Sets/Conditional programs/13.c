#include <stdio.h>

int main()
{
    int age;

    printf("Candidate age: ");
    scanf(" %d", &age);

    printf("The candidate is %s for casting vote.", ((age >= 18) ? "eligible" : "not eligible"));

    return 0;
}