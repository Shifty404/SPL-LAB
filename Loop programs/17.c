#include <stdio.h>
#include <math.h>

int main()
{
   float amount, rate, intrest, time, compundInterest = 1;

   printf("Type the amount: ");
   scanf("%f", &amount);

   printf("Type the interest rate: ");
   scanf("%f", &rate);

   printf("Type the period in years: ");
   scanf("%f", &time);

   intrest = 1 + (rate / 100);

   for (int a = 0; a < time; a++)
      compundInterest = compundInterest * intrest;

   compundInterest = amount * compundInterest - amount;

   printf("Your compound interest is: %.2f", compundInterest);

   return 0;
}