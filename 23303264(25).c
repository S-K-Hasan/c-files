#include<stdio.h>

int main()
{
    int a[11] = {4, 1, 7, 8, 3, 5, 6, 2,0,9,9};
    int t,i,f=0;
     printf("Enter the targeted value:\n ");
     scanf("%d",&t);
     for(i=0;i<11;i++)
     {
         if(t==a[i])
         {
             printf("Number found in index: %d\n",i);
             f++;
         }
     }
     if(f==0)
     {
         printf("Number not found \n");
     }
     else
     {
          printf("Number found %d times\n",f);
     }

}
