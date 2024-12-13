#include<stdio.h>
int main()
{
    int m,p,c;
    printf("enter numbers(math,physics,chemistry):\n");
    scanf("%d %d %d",&m,&p,&c);
    if (m>=60&&p>=50&&c>=40&& m+p+c>=200)
    {
        printf("eligible");
    }

       else if(p+m>=200)
       {
           printf("eligible");
       }
       else
       {
           printf("not eligible");
       }

}
