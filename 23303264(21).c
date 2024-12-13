#include <stdio.h>

int main() {
    int a[10];
    int i;

    printf("Enter 10 elements- ");
    for (i = 0; i < 10; i++) {
        printf("element number %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
