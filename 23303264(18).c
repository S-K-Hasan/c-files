#include <stdio.h>

int main()
{
   for (int i = 1; i <= 1000; i++)
    {
      int sum = 0;
      for (int n = 1; n < i;n++)
     {
      if (i% n == 0)
       {
      sum += n;
       }
     }
       if (sum > i)
        {
      printf("%d is an abundant number.\n", i);
        }
   }
    return 0;

}
