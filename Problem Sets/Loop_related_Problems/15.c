#include <stdio.h>
#include <math.h>

int main (){
    int base, expodent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter expodent: ");
    scanf("%d", &expodent);

    result = pow(base, expodent);
    
    printf("Result: %d", result);

    return 0;
}