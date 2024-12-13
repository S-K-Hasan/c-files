#include <stdio.h>

int main()
{
    int n, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (sum != 1 && sum != 4)
        {
        sum = 0;
        while (n > 0)
        {
            rem = n % 10;
            sum += (rem * rem);
            n /= 10;
        }
        n = sum;
       }
    if (sum == 1)
        {
        printf("Happy Number\n");
       } else
       {
        printf("Not Happy Number\n");
        }

    return 0;
}
