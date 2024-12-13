#include <stdio.h>

int main()
{
    int i, n, n1 = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            n1 = 1;
            break;
        }
    }

    if (n1 == 0)
        {
        printf("Prime Number\n");
       }
    else
        {
        printf("Not Prime Number\n");
       }

    return 0;
}
