#include <stdio.h>

int main()
{
    int side, area;

    printf("Side size: ");
    scanf("%d", &side);

    area = side * side;

    printf("Area of Square : %d", area);
    return 0;
}