#include<stdio.h>
int main()
{
    int u;
    float a,b,c,d;
    printf("enter bill(unit):");
    scanf("%d",&u);
    a=u*0.5;
    b=(50*0.5)+(u-100)*0.75;
    c=(50*0.5)+(100*0.75)+(u-150)*1.20;
    d= (50*0.5)+(100*0.75)+(100*1.20)+(u-250)*1.50;

    (u>=0 ||u<=50)?printf("Bill is : %f",a):
        (u>50 ||u<=150)?printf("Bill is : %f",b):
            (u>150 || u<= 250)? printf ("Bill is : %f",c):
                printf("Bill is : %f",d);





}
