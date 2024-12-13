#include <stdio.h>
#define size 100

int main()
{
    int a[size][size], b[size][size], res[size][size];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns for first matrix: ");
    scanf("%d", &c1);
    printf("Enter rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns for second matrix: ");
    scanf("%d", &c2);

    if (r1 == c2 && c1 == r2)
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
        printf("Multiplication:\n");
        for (i = 0; i < r1; i++)
         {
            for (j = 0; j < c2; j++)
             {
                res[i][j] = 0;
                for (k = 0; k < c1; k++)
                 {
                    res[i][j] =res[i][j] +a[i][k] * b[k][j];
                 }
                printf("%d ", res[i][j]);
             }
             printf("\n");
        }
    }
    else
        {
        printf("r1 must be equal to c2 and r2 must be equal to c1.\n");
       }
  getch();
    return 0;
}



