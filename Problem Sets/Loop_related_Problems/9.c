#include <stdio.h>

int main()
{
    int students, i, total = 0, n = 0;
    double A, HW, CT, MT, TF;
    char grade [] [2] = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"};

    printf("Enter students count: ");
    scanf("%d", &students);

    while (n != students)
    {
        printf("Enter A, HW, CT, MT & TF: ");
        scanf("%lf %lf %lf %lf %lf", &A, &HW, &CT, &MT, &TF);

        A = (A / 5) * 5;
        HW = (HW / 10) * 10;
        CT = (CT / 15) * 15;
        MT = (MT / 50) * 30;
        TF = (TF / 100) * 40;
        total = A + HW + CT + MT + TF;
        i = (total >= 90 && total <= 100) ? 0 : (total >= 86 && total <= 89) ? 1
                                                  : (total >= 82 && total <= 85)   ? 2
                                                  : (total >= 81 && total <= 78)   ? 3
                                                  : (total >= 74 && total <= 77)   ? 4
                                                  : (total >= 70 && total <= 73)   ? 5
                                                  : (total >= 66 && total <= 69)   ? 6
                                                  : (total >= 62 && total <= 65)   ? 7
                                                  : (total >= 58 && total <= 61)   ? 8
                                                  : (total >= 55 && total <= 57)   ? 9
                                                                                   : 10;

        printf("Student %d: %s\n", n + 1, grade[i]);

        n++;
    }

    return 0;
}