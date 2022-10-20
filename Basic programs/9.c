#include <stdio.h>

int main()
{
    char charType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double doubleType;

    printf("Char: %ld\n", sizeof(charType));
    printf("Short: %ld\n", sizeof(shortType));
    printf("Int: %ld\n", sizeof(intType));
    printf("Long: %ld\n", sizeof(longType));
    printf("Float: %ld\n", sizeof(floatType));
    printf("Double: %ld\n", sizeof(doubleType));
    return 0;
}