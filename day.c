#include<stdio.h>
int main()
{
    int x;
    printf("enter a number(1-7):");
    scanf("%d",&x);
    (x==1)?printf("saturday"):(x==2)?printf("sunday"):(x==3)?printf("monday"):(x==4)?printf("tuesday"):(x==5)?printf("wednesday"):(x==6)?printf
    ("thursday"):(x==7)?printf("friday"):printf("none");



}
