#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j, temp;

    printf("Original Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(i = 0; i < n; i++) {
        temp = matrix[i][0];
        matrix[i][0] = matrix[i][2];
        matrix[i][2] = temp;
    }

    printf("\nRotated Matrix (90 degrees clockwise):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
