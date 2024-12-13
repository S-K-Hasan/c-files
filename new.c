#include<stdio.h>
int main()
{
    int i,rem,rev=0,temp;
    printf("enter a number:");
    scanf("%d",i);
     temp=i;
      while(i!=0)
      {
          rem=i%10;
          rev=rev*10+
          rem;
          i=i/10;
      }
      if(temp==rev)
        {
            printf("palidrom");
        }
      else
      {
          printf("not palidrom");
      }




}
