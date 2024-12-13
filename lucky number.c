#include<stdio.h>
int main()
{
    int n,t,p,i=0;
    scanf("%d",&n);
    for(i=0;i<1;i++)
    {
        t=n%10;
    }
    n=n/10;
    for(i=0;i<1;i++)
    {
        p=n%10;
    }
    if(t%p==0 || p%t==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
