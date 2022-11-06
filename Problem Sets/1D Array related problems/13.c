#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n); // Initialiazing array size

    int arr[n];

    for (i = 0; i < n; i++) // Scanning array
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) // Taking one array data
    {
        for (j = i + 1; j < n; j++) // Scanning whole array with one array data
        {
            if (arr[i] == arr[j]) // Condition to find duplicate
            {
                for (k = j; k < n-1; k++) // Loop for replacing with duplicate
                {
                    arr[k] = arr[k + 1];
                }
                n--; // Reducing size 
                j--; // To remove all the arr[i]'s duplicates 
            }
        }
    }

    for (i = 0; i < n; i++) // Printing array
    {
        printf("%d ", arr[i]);
    }

    return 0;
}