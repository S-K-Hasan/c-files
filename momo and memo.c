#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    if(a>0&&b>0&&k>0)
    {
    if (a%k==0 && b%k==0)
    {
        printf("Both");
    }
     if(a%k==0 && b%k!=0)
    {
        printf("Memo");
    }
     if(a%k!=0 && b%k==0)
    {
        printf("Momo");
    }
     if(a%k!=0 && b%k!=0)
    {
        printf("No One");
    }
    }

}
