#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int hall[rows][cols];
    int i, j, emptyCount = 0, totalEmpty = 0, maxEmpty = 0, rowWithMost = 0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            hall[i][j] = rand() % 2;
            if(hall[i][j] == 0)
                emptyCount++;
        }
        totalEmpty += emptyCount;
        if(emptyCount > maxEmpty) {
            maxEmpty = emptyCount;
            rowWithMost = i + 1;
        }
    }

    printf("\nSeating Chart (0=Empty, 1=Occupied):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", hall[i][j]);
        printf("\n");
    }

    printf("\nTotal Available Seats: %d\n", totalEmpty);
    printf("Row with Most Empty Seats: Row %d (%d empty seats)\n", rowWithMost, maxEmpty);
    return 0;
}
