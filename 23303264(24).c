
#include <stdio.h>

int bs(int a[],int l,int h,int t)
{
   int m;
   m=(l+h)/2;
    if(l>h){ return  -1 ;}
   if(a[m]==t)
   {
       return m;
   }
   else if(a[m]>t)
   {
       bs(a,l,m-1,t);
   }
   else
   {
       bs(a,m+1,h,t);
   }

}
int main() {
    int a[10] = {56,446, 4571, 56367, 5778, 7473,74745,7476, 574572, 579};
    int size, i, temp, j, k;
    size = sizeof(a) / sizeof(a[0]);
    for (j = 0; j < size; j++)
        {
        for (i = 0; i < size - 1; i++)
         {
            if (a[i] > a[i + 1])
             {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
             }
         }
       }
     printf("Ascending:");
     for(k=0;k<size;k++)
         {
         printf("%d ",a[k]);
         }
    printf("\n");
    int l, h, m, t,n,b;
    l = 0;
    h = size - 1;
    printf("Enter the targeted value: ");
    scanf("%d", &t);
    b=bs(a,l,h,t);
    if (b!= -1)
    {
         printf("found in index :%d",b);
    }
    else {
 printf("value not found");
    }
   /* while (l <= h)
     {
        m = (l + h) / 2;
        if (a[m] == t)
         {
            printf("Value found in index: %d\n", m);
            break;
         }
        else if (a[m] > t)
            {
          h = m - 1;
            }
        else
            {
            l = m + 1;
           }
     }
    if (l > h)
        {
        printf("Value not found\n");
        }
    getch();
    return 0;*/
}
