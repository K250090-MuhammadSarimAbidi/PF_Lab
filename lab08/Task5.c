#include <stdio.h>

int main() {
    int marks[5][4] = {
        {80, 90, 83, 74},
        {85, 78, 92, 86},
        {75, 70, 78, 70},
        {91, 88, 82, 90},
        {76, 80, 86, 78}
    };
    float avg[5];
    int high[4] = {0};
    int i, j;
    
    for(i = 0; i < 5; i++) {
        int sum = 0;
        for(j = 0; j < 4; j++) {
            sum += marks[i][j];
            if(marks[i][j] > high[j])
                high[j] = marks[i][j];
        }
        avg[i] = sum / 4.0;
    }

    printf("Average marks of each student:\n");
    for(i = 0; i < 5; i++)
        printf("%.2f ", avg[i]);

    printf("\nHighest marks in each subject:\n");
    for(j = 0; j < 4; j++)
        printf("%d ", high[j]);

    return 0;
}
