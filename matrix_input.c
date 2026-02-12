#include <stdio.h>

int main()
{
    int m, n, p, r2;
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;

    // Input dimensions
    printf("Enter number of rows of matrix A (m): ");
    scanf("%d", &m);
    printf("Enter number of columns of matrix A (n): ");
    scanf("%d", &n);

    printf("Enter number of rows of matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns of matrix B (p): ");
    scanf("%d", &p);

    // Check condition for multiplication
    if (n != r2)
    {
        printf("Matrix multiplication not possible!");
        return 0;
    }

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}