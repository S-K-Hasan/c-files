
#include <stdio.h>

int main() {

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 7 == 0 || x % 10 == 7)
        {
        printf("%d is a buzz number\n", x);
      } else
      {
        printf("%d is not a buzz number\n", x);
      }

    return 0;
}
