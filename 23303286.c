#include <stdio.h>
int main(){
//Abundant number between 1 to 1000
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
printf("%d ", i);
}
}
return 0;
}
