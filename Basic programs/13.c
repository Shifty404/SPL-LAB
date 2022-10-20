#include <stdio.h>

int main()
{
    int length, breadth, area;

    printf("Length of rectangle: ");
    scanf("%d", &length);

    printf("Breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area of rectangle: %d", area);
    return 0;
}