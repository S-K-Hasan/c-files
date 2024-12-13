#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,x1,x2;
    L:
    printf("Enter the value of a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d==0)
      {
          printf("The roots are real and equal \n");
          x1= (-b)/(2*a);
          x2= (-b)/(2*a);
          printf("The roots are(x1,x2) :%f and %f\n",x1,x2);
      }
    else if(d>0)
      {
          printf("The roots are real and different \n");
          x1= (-b+sqrt(d))/(2*a);
          x2= (-b-sqrt(d))/(2*a);
          printf("The roots are(x1,x2) :%f and %f \n",x1,x2);
      }
    else
    {
        printf("roots are imaginary\n");
    }
    goto L;
    getch();
}
