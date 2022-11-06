#include <stdio.h>

int main ()
{
    int i, n, min , max , minIndex, maxIndex ;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(max < a[i]){
            max = a[i];
            maxIndex = i;
        }
        if (min > a[i]){
            min = a[i];
            minIndex = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d", min, minIndex);


    return 0;
}

