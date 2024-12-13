
#include<stdio.h>
int sum(int a)
{
    if(a==0)
    {
       return 0;
    }
    else
    {
        return a+sum(a-1);
    }
}
main()
{
    int n,s;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The sum of natural number is: ");
    s= sum(n);
    printf("%d",s);
}
