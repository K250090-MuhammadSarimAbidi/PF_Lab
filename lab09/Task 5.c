#include <stdio.h>

void analyzeData(int *arr, int n, int *max, int *min, float *avg) {
    int sum = arr[0];
    *max = *min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
        sum += arr[i];
    }
    *avg = (float)sum / n;
}

int main() {
    int arr[5], max, min;
    float avg;
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    analyzeData(arr, 5, &max, &min, &avg);
    printf("Maximum = %d\nMinimum = %d\nAverage = %.2f\n", max, min, avg);
    return 0;
}

