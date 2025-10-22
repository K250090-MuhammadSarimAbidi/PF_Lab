#include <stdio.h>
int main() {
    int sensor1[] = {3, 6, 9};
    int sensor2[] = {12, 15, 18, 21};
    int n1 = sizeof(sensor1) / sizeof(sensor1[0]);
    int n2 = sizeof(sensor2) / sizeof(sensor2[0]);
    int i, merged[n1 + n2];
    
    printf("Sensor 1: ");
    for (i = 0; i < n1; i++){
    	printf("%d ", sensor1[i]);
    	merged[i] = sensor1[i];
	}
	printf("\n");
	
	printf("Sensor 2: ");
    for (i = 0; i < n2; i++){
    	printf("%d ", sensor2[i]);
    	merged[n1 + i] = sensor2[i];
	}
	printf("\n");
	
    printf("Merged Sensor Data: ");
    for (i = 0; i < n1 + n2; i++){
    	printf("%d ", merged[i]);
	} 
	
    return 0;
}
