#include <stdio.h>
int main() {
    float usage[] = {120.5, 98.3, 110.75, 132.6, 101.9};
    int i, len = sizeof(usage) / sizeof(usage[0]);
    float avg, total = 0;
    
    printf("Hourly Usage: ");
    for (i = 0; i < len; i++){
    	printf("%.2f ", usage[i]);
	    total += usage[i];
	}
	
    avg = total/len;
    
	printf("\nTotal Power Usage: %.2f watts\n", total);
    printf("Average Power Usage: %.2f watts\n", avg);
	return 0;
}
