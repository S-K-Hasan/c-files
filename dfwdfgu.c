#include<stdio.h>
 void fun(int *a)
 {
     *a=*a * *a;
     printf("user defined: %d \n",*a);
 }
 int main()
 {
     int x=3;
     fun(&x);
     printf("main :%d",x);
 }
