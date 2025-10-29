#include <stdio.h>

int main() {
    int inventory[2][3][4] = {
        {{10, 15, 20, 25}, {12, 18, 16, 14}, {8, 22, 17, 19}},
        {{9, 11, 10, 20}, {13, 14, 18, 15}, {25, 24, 21, 23}}
    };

    int i, j, k, totalSection[2] = {0}, maxShelfSum = 0;
    int shelfSec = 0, shelfNum = 0;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            int shelfSum = 0;
            for(k = 0; k < 4; k++) {
                totalSection[i] += inventory[i][j][k];
                shelfSum += inventory[i][j][k];
            }
            if(shelfSum > maxShelfSum) {
                maxShelfSum = shelfSum;
                shelfSec = i;
                shelfNum = j;
            }
        }
    }

    printf("Total items in each section:\n");
    for(i = 0; i < 2; i++)
        printf("Section %d: %d\n", i+1, totalSection[i]);

    printf("\nShelf with highest total quantity: Section %d, Shelf %d (%d items)\n", shelfSec+1, shelfNum+1, maxShelfSum);

    return 0;
}
