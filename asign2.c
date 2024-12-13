
#include <stdio.h>
#define N 5
float calculateCommission(float salesAmount, float commissionRate)
{
    return salesAmount * (commissionRate / 100);
}
int main() {
    int employeeID[N];
    float salesAmount[N];
    float commissionRate[N];
    printf("Enter employee ID, sales amount, and commission rate for each sales representative:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Employee ID for Representative %d: ", i+1);
        scanf("%d", &employeeID[i]);
        printf("Sales amount for Representative %d ", i+1);
        scanf("%f", &salesAmount[i]);
        printf("Commission rate for Representative %d: ", i+1);
        scanf("%f", &commissionRate[i]);
    }
    printf("\nSales Commission:\n");
    for (int i = 0; i < N; i++)
    {
        float totalCommission = calculateCommission(salesAmount[i], commissionRate[i]);
        printf("Employee ID: %d - Total Commission: %.2f\n", employeeID[i], totalCommission);
    }
    return 0;
}
