#include <stdio.h>
#include <stdlib.h>

int main() {
    int image[8][8];
    int bright[8][8];
    int i, j;
    
    printf("Original Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++){
            image[i][j] = rand() % 256;
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }

    printf("\nBrightened Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++){
        	bright[i][j] = image[i][j] + 20;
            if(bright[i][j] > 255)
                bright[i][j] = 255;
                printf("%3d ", bright[i][j]);
		}
        printf("\n");
    }

    return 0;
}
