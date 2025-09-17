#include <stdio.h>
int main (){
	int a;
    char ch;
    
    printf("Enter a number between 65 and 90: ");
    scanf("%d", &a);
    
	ch = (char) a;
    printf("%d = %c\n", a, ch);
    
	return 0;
}
