
#include <stdio.h>
#include <math.h>

int main()
{

    int n, nod, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    nod = log10(n) + 1;

    int temp = n;
    while (temp != 0)
        {
        rem = temp % 10;
        sum += pow(rem, nod);
        temp /= 10;
       }

    if (sum == n)
        {
        printf("Armstrong Number\n");
       } else
       {
        printf("Not Armstrong Number\n");
       }

    return 0;
}
