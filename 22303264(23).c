#include <stdio.h>
int main()
{
    int a[10]={4,0,1,7,8,3,5,6,2,9};
    int size,i,temp,j,k;
    size=sizeof(a)/sizeof(a[0]);
    for(j=0;j<size;j++)
    {
        for(i=0;i<size-1;i++)
        {
            if(a[i]>a[i+1])
            {
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
            }
        }

    }
    printf("Ascending:");
     for(k=0;k<size;k++)
         {
         printf("%d ",a[k]);
         }
    printf("\n");

       for (j = 0; j < size; j++)
        {
        for (i = 0; i < size - 1; i++)
         {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
         }
       }
      printf("Descending:");
    for (k = 0; k < size; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");
    getch();
}
