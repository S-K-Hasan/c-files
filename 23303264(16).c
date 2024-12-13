#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    double x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = sqrt(n + 1);

    if ((int)x == x)
        {
        printf("Sunny Number\n");
        }
    else
        {
        printf("Not Sunny Number\n");
        }

    return 0;
}
