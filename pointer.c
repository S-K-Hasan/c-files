#include<stdio.h>
int main()
{
    int x =5,y=10,z=20,sum;
    int*ptr;
    ptr=&x;
    printf("value of x is:%d\n",x);
    printf("adress of x is:%d\n",&x);
    printf("adress of x is:%u\n",&x);
    printf("adress of x is:%x\n",&x);
    printf("value of ptr is:%d\n",ptr);
    printf("adress of ptr is:%d\n\n\n",*ptr);

 ptr=&y;
    printf("value of y is:%d\n",y);
    printf("adress of y is:%d\n",&y);
    printf("adress of y is:%u\n",&y);
    printf("adress of y is:%x\n",&y);
    printf("value of ptr is:%d\n",ptr);
    printf("adress of ptr is:%d\n\n\n",*ptr);

 ptr=&z;
    printf("value of x is:%d\n",z);
    printf("adress of x is:%d\n",&z);
    printf("adress of x is:%u\n",&z);
    printf("adress of x is:%x\n",&z);
    printf("value of ptr is:%d\n",ptr);
    printf("adress of ptr is:%d\n\n\n",*ptr);

//sum using pointer:
int*ptr1,*ptr2;
ptr1=&x;
ptr2=&y;
sum = *ptr1+*ptr2;
printf("sum is :%d\n\n\n",sum);

//swapping using pointer
int a=10,b=20,temp;
int*ptra,*ptrb;
ptra=&a;
ptrb=&b;

temp=*ptra;
*ptra=*ptrb;
*ptrb=temp;
printf("after swap: %d  %d ,",a,b);






}
