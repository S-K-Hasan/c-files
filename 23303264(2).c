
#include<stdio.h>
int main()
{
    float p,r,t,i;
    printf("enter the principle amount:\n");
    scanf("%f",&p);
    printf("enter the interest rate:\n");
    scanf("%f",&r);
    printf("enter duration:\n");
    scanf("%f",&t);
      i=(p*r*t)/100;
    printf("the amount of simple interest is:%f ",i);
    getch();
}
