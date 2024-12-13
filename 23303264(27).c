
#include <stdio.h>
#define size 100

void matrixAddition(int a[size][size], int b[size][size], int sum[size][size], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        {
        for (j = 0; j < c; j++)
         {
            sum[i][j] = a[i][j] + b[i][j];
         }
       }
}

int main()
{
    int a[size][size], b[size][size], sum[size][size];
    int r1, c1, r2, c2, i, j;

    printf("Enter rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns for first matrix: ");
    scanf("%d", &c1);
    printf("Enter rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns for second matrix: ");
    scanf("%d", &c2);

    if (r1 == r2 && c1 == c2)
        {
        printf("Elements in matrix 1:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
             {
                printf("Enter element at index %d %d: ", i, j);
                scanf("%d", &a[i][j]);
             }
        }
        printf("Elements in matrix 2:\n");
        for (i = 0; i < r2; i++)
         {
            for (j = 0; j < c2; j++)
             {
                printf("Enter element at index %d %d: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("Matrix 1:\n");
        for (i = 0; i < r1; i++)
         {
            for (j = 0; j < c1; j++)
             {
                printf("%d ", a[i][j]);
             }
            printf("\n");
         }
        printf("Matrix 2:\n");
        for (i = 0; i < r2; i++)
         {
            for (j = 0; j < c2; j++)
             {
                printf("%d ", b[i][j]);
             }
            printf("\n");
        }
        matrixAddition(a, b, sum, r1, c1);
        printf("Sum:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrices must have the same dimensions.\n");
    }

    return 0;
}
