#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,temp,count=0,rem,sum=0;
    printf("enter a number");
    scanf("%d",&x);
    temp=y=x;

    while(x!=0)
    {
        count++;
        x=x/10;
    }
   // printf("%d",count);
   while(y!=0)
   {
       rem=y%10;
       sum=sum +pow(rem,count);
       y=y/10;
   }
 // printf("%d",sum);
    if(sum==temp)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }

}
