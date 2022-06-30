#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[6][6];
    int i, j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (j == i - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum - diagonal bellow the main: %d", sum);
}