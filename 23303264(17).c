#include <stdio.h>

int main()
{

    int n, rem, sum = 0, sq;
    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    while (sq != 0)
        {
        rem = sq % 10;
        sum += rem;
        sq = sq / 10;
        }

    if (sum == n)
        {
        printf("Neon number\n");
       }
    else
        {
        printf("Not Neon number\n");
        }

    return 0;
}
