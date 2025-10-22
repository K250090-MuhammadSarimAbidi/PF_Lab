#include <stdio.h>
int main() {
    int temp[] = {22, 27, 19, 33, 25, 29};
    int len = sizeof(temp) / sizeof(temp[0]);
    int i, max = temp[0], min = temp[0];
    
    printf("Daily Temperatures: ");
    for (i = 0; i < len; i++) {
    	printf("%d ", temp[i]);
        if (temp[i] > max){
		max = temp[i];
		}
	    if (temp[i] < min){
		min = temp[i];
		}
    }
    
    printf("\nHottest Day: %d\n", max);
    printf("Coldest Day: %d\n", min);
    
	return 0;
}
