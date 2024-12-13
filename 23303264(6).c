#include<stdio.h>
int main()
{
    int a,b;
    char c;
    g:
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("enter an operator:\n");
    scanf(" %c",&c);
    switch(c)
     {
        case '+':
        printf("%d+%d=%d\n",a,b,a+b);
        break;
        case '-':
        printf("%d-%d=%d\n",a,b,a-b);
        break;
        case '*':
        printf("%d*%d=%d\n",a,b,a*b);
        break;
        case '/':
          if (b != 0){
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
                     }
            else{
                printf("Division by zero is not allowed\n");
                }
            break;
        default:
        printf("invalid operator\n");
        break;
     }
     goto g;
}
