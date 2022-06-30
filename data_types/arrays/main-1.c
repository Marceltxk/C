#include <stdio.h>
#include <math.h>

int main() {
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    float array[size];
    int i;
    for (i = 0; i < size; i++) {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }
    float sum = 0;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    
    float median = sum / size;
    
    float variations = 0;
    for (int i = 0; i < size; i++) {
        float v = array[i] - median;
        variations += v * v;
    }

    float sigma = sqrt(variations / size);

    printf("Median: %.2f \n", median);
    printf("standard deviation: %.2f\n", sigma);
    return 0;
}