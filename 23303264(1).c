
#include<stdio.h>
#define Pi 3.1416
int main()
{
    int h=9;
    float r,v;
    printf("enter radius of the cylinder: \n");
    scanf("%f",&r);
    v= Pi*pow(r,2)*h;
    printf("The volume of the cylinder:%f",v);

}
