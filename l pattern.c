#include<stdio.h>
int main()
{
    int i,j,n=16;
    for(i=n/2;i<n;i+=2)
    {
        for(j=1;j<n-i;j+=2)
        {
            printf("  ");
        } for(j=1;j<i+1;j++)
        {
            printf(" *");
        } for(j=1;j<n-i+1;j++)
        {
            printf("  ");
        } for(j=1;j<i+1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

  for(i=n;i>0;i--)
   {
      for(j=0;j<n-i;j++)
      {
          printf("  ");
      }for(j=1;j<i*2;j++)
      {
          printf(" *");
      }
      printf("\n");
   }
}
