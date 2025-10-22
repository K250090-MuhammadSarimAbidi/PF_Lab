#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = len - 1;
    int i, temp;
    printf("Array: ");
    for(i = 0; i < len; i++){
    	printf("%d ", arr[i]);
	}
    printf("\n");
    
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
    
    printf("Reversed Array: ");
    
    for (i = 0; i < len; i++){
    	printf("%d ", arr[i]);
	} 
	
    return 0;
}
