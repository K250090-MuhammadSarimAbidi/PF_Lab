#include <stdio.h>
int main() {
    int readings[] = {12, 15, 12, 18, 21, 12, 24, 37, 21, 10, 2, 14, 20, 11, 45};
    int len = sizeof(readings) / sizeof(readings[0]);
    int i, val, newsize=0;
    printf("Readings: ");
    
    for(i = 0; i < len; i++){
    	printf("%d ",readings[i]);
	}
	printf("\n");
    printf("Enter value to delete: ");
    scanf("%d", &val);
    
    for (i = 0; i < len; i++) {
        if (readings[i] != val){
        	readings[newsize++] = readings[i];
		}
    }
    printf("\nUpdated readings: ");
    
    for (i = 0; i < newsize; i++){
    	printf("%d ", readings[i]);
	}
    return 0;
}
