#include <stdio.h>
#include <string.h>

int main()
{
    int rollNumber, physics, chemistry, informationTechnology, total;
    float percentage;
    char name[20], division[10];

    printf("Enter the roll number of the student: ");
    scanf("%d", &rollNumber);

    printf("Enter the name of the student: ");
    scanf("%s", &name);

    printf("Enter the mark of Physics: ");
    scanf("%d", &physics);

    printf("Enter the mark of Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter the mark of Information Technology: ");
    scanf("%d", &informationTechnology);

    total = physics + chemistry + informationTechnology;
    percentage = total / 3.0;

    if (percentage >= 60)
        strcpy(division, "First");
    else if (percentage < 60 && percentage >= 48)
        strcpy(division, "Second");
    else if (percentage < 48 && percentage >= 36)
        strcpy(division, "Pass");
    else
        strcpy(division, "Fail");

    printf("\nRoll No: %d\nName of Student: %s\nMarks in Physics: %d\nMarks in Chemistry: %d\nMarks in Information Technology: %d\nTotal Marks= %d\nPercentage= %5.2f\nDivision= %s\n", rollNumber, name, physics, chemistry, informationTechnology, total, percentage, division);
    
    return 0;
}