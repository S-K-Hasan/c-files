#include <stdio.h>

int main()
{
    int x, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &x);

    while (x > 0)
        {
        fact *= x;
        x--;
       }
    printf("Factorial is %d\n", fact);
    return 0;
}
