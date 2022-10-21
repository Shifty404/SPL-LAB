#include <stdio.h>

int main()
{
    int math, physics, chemistry, total, mathAndPhysics, answer;

    printf("Math: ");
    scanf(" %d", math);

    printf("Physics: ");
    scanf(" %d", physics);

    printf("Chemistry: ");
    scanf(" %d", chemistry);

    total = math + physics + chemistry;
    mathAndPhysics = math + physics;
    answer = ((math >= 65) && (physics >= 55) && (chemistry >= 50) && ((total >= 180) || (mathAndPhysics >= 140))) ? 1 : 0;

    printf("Total of 3 subjects: %d", total);
    printf("Total of Math and Physics %d", mathAndPhysics);
    if (answer == 1)
        printf("The  candidate is eligible for admission.");
    else
        printf("The candidate is not eligiblefor admission.");
    return 0;
}