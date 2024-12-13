#include<stdio.h>
int main()
{
    double n,k,a,r;
     scanf("%lf %lf %lf", &n, &k, &a);
    r=(n*k)/a;
    if(r == (int)r)
    {

    if( r <= 2147483647 && r >= -2147483647)
    {
         printf("int");
    }

    else
    {
        printf("long long");
    }
    }
    else {
            printf("double");

    }
}
