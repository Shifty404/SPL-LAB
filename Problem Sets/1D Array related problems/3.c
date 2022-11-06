#include <stdio.h>

int main ()
{
    int i, n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            sum += a[i];
    }

    printf("%d", sum);

    return 0;
}
