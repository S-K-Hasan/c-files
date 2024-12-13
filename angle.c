#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter three angles:");
    scanf("%d %d %d",&x,&y,&z);
    a= x+y+y;
    (a==180)?printf("this is a valid triangle"):printf("not valid ");

}
