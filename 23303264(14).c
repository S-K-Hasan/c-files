#include <stdio.h>


    void st(int n)
  { int  t, fact = 1, rem, i, sum = 0;
        t = n;
    while (n != 0) {
        rem = n % 10;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n = n / 10;
    }

    if (sum == t) {
        printf("Strong\n");
    } else {
        printf("Not\n");
    }
  }
  int main() {
    int n, t, fact = 1, rem, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
   st(n);
    /*t = n;
    while (n != 0) {
        rem = n % 10;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n = n / 10;
    }

    if (sum == t) {
        printf("Strong\n");
    } else {
        printf("Not\n");
    } */

    return 0;
}
