#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter 3 angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>0 && a<180)
    {
        if(b>0 && b<180)
        {
            if(c>0 && c<180)
            {
                if(a+b+c==180)
                {
                    printf("It is a valid triangle.\n");
                }
                else
                {
                    printf("It is an invalid triangle.\n");
                }
            }
            else
            {
                printf("It is an invalid triangle.\n");
            }
        }
        else
        {
            printf("It is an invalid triangle.\n");
        }
    }
    else{
        printf("It is an invalid triangle.\n");
    }

    return 0;
}