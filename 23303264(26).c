#include <stdio.h>
#define SIZE 8
void displayArray(int arr[], int size)
 {
    printf("Updated array: ");
    for (int i = 0; i < size; i++)
        {
        printf("%d ", arr[i]);
        }
    printf("\n");
}

int main()
{
    int a[SIZE] = {25, 6, 13, 11, 22, 14, 7, 9};
    int newSize = SIZE - 1;
    for (int i = 2; i < SIZE - 1; i++)
        {
        a[i] = a[i + 1];
        }
    displayArray(a, newSize);

    int newElement = 10;
    newSize++;
    for (int i = newSize - 1; i > 3; i--)
        {
        a[i] = a[i - 1];
       }
    a[3] = newElement;
    displayArray(a, newSize);
getch();
    return 0;
}
