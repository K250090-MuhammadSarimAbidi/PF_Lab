#include <stdio.h>
int main() {
    int reading[] = {7, 14, 21, 28, 35};
    int len = sizeof(reading) / sizeof(reading[0]);
    int last = reading[len - 1];
    int i;
    printf("Array before Rotation: ");
    for (i = 0; i < len; i++){
    	printf("%d ", reading[i]);
	}
    printf("\n");
    
    for (i = len - 1; i > 0; i--){
    	reading[i] = reading[i - 1];
	} 
	
    reading[0] = last;
    printf("Array after rotation: ");
    
    for (i = 0; i < len; i++){
    	printf("%d ", reading[i]);
	} 
    return 0;
}
