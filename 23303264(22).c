#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], b[SIZE], sum[SIZE];
    int size, i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    printf("Enter elements of the first array:\n");
    for (i = 0; i < size; i++)
        {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
       }
    printf("Enter elements of the second array:\n");
    for (i = 0; i < size; i++)
      {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
      }
    printf("Element-wise addition of the arrays:\n");
    for (i = 0; i < size; i++)
     {
        sum[i] = a[i] + b[i];
        printf("%d  ", sum[i]);
     }
    printf("\n");
    getch();
    return 0;
}
