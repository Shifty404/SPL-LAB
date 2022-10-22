#include <stdio.h>

int main()
{
    char employeeCategory;
    int workYear, familyMember;
    float familyIncome;

    printf("Enter employee category, Years of work experience, Number of family members & Total family income per month: ");
    scanf(" %c %d %d %f", &employeeCategory, &workYear, &familyMember, &familyIncome);

    switch (employeeCategory)
    {
    case 'X':
        if ((workYear >= 12 && familyMember > 5) || familyIncome < 1000.50)
            printf("Will Receive the Bonus!");
        else if (familyMember > 5)
            printf("Will Receive the Bonus!");
        else
            printf("Will Not Receive the Bonus!");
        break;
    case 'Y':
        if ((workYear >= 12 && familyMember >= 5) || familyIncome < 1000.50)
            printf("Will Receive the Bonus!");
        else if (familyMember > 8 && familyIncome < 1100.78)
            printf("Will Receive the Bonus!");
        else
            printf("Will Not Receive the Bonus!");
        break;
    case 'Z':
        if ((workYear >= 12 && familyMember >= 5) || familyIncome < 1000.50)
            printf("Will Receive the Bonus!");
        else if (familyMember > 8 && familyIncome < 1100.78)
            printf("Will Receive the Bonus!");
        else
            printf("Will Not Receive the Bonus!");
        break;
    default:
        printf("Worng input!");
        break;
    }
    return 0;
}

// X 11 6 1500
// Y 6 9 1500