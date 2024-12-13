#include<stdio.h>
int main()
{
    int u;
    float a,b;
    printf("Enter unit:\n");
    scanf("%d",&u);
     if(u>=0)
       {
         if(u<=50)
          {
            a=u*0.5;
            b=a+(0.2*a);
            printf("Total bill is:%f",b);
          }
         else if(u>50 ||u<=150)
          {
            a=(50*0.5)+(u-100)*0.75;
            b=a+(0.2*a);
            printf("Total bill is:%f",b);
          }
         else if (u>150 || u<= 250)
          {
            a=(50*0.5)+(100*0.75)+(u-150)*1.20;
            b=a+(0.2*a);
            printf("Total bill is:%f",b);
          }
          else
          {
            a=(50*0.5)+(100*0.75)+(100*1.20)+(u-250)*1.50;
            b=a+(0.2*a);
            printf("Total bill is:%f",b);
          }
       }
      else
       {
         printf("Invalid unit");
       }
}
