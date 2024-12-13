#include<stdio.h>
int main()
{
    int x,rem,sum=0;
     printf("enter the number:");
     scanf("%d",&x);
     while(x!=0)
        {
         rem=x%10;
         sum=sum+rem;
         x=x/10;
        }

      printf("the sum of digits: %d",sum);
}
