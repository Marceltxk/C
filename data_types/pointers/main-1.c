#include <stdio.h>
#include <stdlib.h>

int main() {
    int rowsA, columnsA, rowsB, columnsB;
    printf("rows matrixA: ");
    scanf("%d", &rowsA);
    printf("columns matrixA: ");
    scanf("%d", &columnsA);
    printf("rows matrixB: ");
    scanf("%d", &rowsB);
    printf("columns matrixB: ");
    scanf("%d", &columnsB);
    float **matrixA = (float **) malloc( rowsA*columnsA * sizeof(float *));
    float **matrixB = (float **) malloc( rowsB*columnsB * sizeof(float *));
    
    // allocating space matrixA
    for (int i = 0; i < rowsA; i++) {
        matrixA[i] = (float *) malloc( rowsA * columnsA * sizeof(float *));
    }
    // allocating space matrixB
    for (int i = 0; i < rowsB; i++) {
        matrixB[i] = (float *) malloc( rowsB * columnsB * sizeof(float *));
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            printf("matrixA[%d][%d] = ",i, j);
            scanf("%f", &matrixA[i][j]);
        }
    }

    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < columnsB; j++) {
            printf("matrixB[%d][%d] = ", i, j);
            scanf("%f", &matrixB[i][j]);
        }
    }
    int rowsC = columnsA;
    int columnsC = rowsB;
    float **matrixC = (float **) malloc ( columnsC*rowsC * sizeof(float *));
    // allocating space matrixC
    for (int i = 0; i < rowsC; i++) {
        matrixC[i] = (float *) malloc( rowsC * columnsC * sizeof(float *));
    }
    
    for (int i = 0; i < rowsC; i++) {
        for (int j = 0; j < columnsC; j++) {
            matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
            printf("matrixC[%d][%d] = %.1f\n", i, j, matrixC[i][j]);
        }
    }
    //Deallocate matrices A, B and C
    
    for (int i = 0; i < rowsA; i++) {
        free(matrixA[i]);
    }
    free(matrixA);
    
    for (int i = 0; i < rowsB; i++) {
        free(matrixB[i]);
    }
    free(matrixB);
    
    for (int i = 0; i < rowsC; i++) {
        free(matrixC[i]);
    }
    free(matrixC);
    return 0;
}