#include <stdio.h>

int main()
{
    int i, n, result = 0, temp1 = 0, temp2 = 1;

    printf("Enter n: ");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            result = i;
        else
        {
            temp1 = temp2 * 10 + i;
            temp2 = temp1;
            result += temp1;
        }
    }

    printf("Result: %d", result);

    return 0;
}