#include<stdio.h>
int main()
{
  float i=1.0;
  float sum=0.00;

  while(i>=1/32.0)
  {

    sum=sum +i;
    i=i/2.0;

  }
  printf("sum is %f",sum);

}
