#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter Three Integers: ");
	scanf("%d\n%d\n%d", &a, &b, &c);
	if((a>b&&a<c)||(a>c&&a<b)){
		printf("\nThe First Number is 2nd largest, The Number is: %d", a);
	}
	else if((b>a&&b<c)||(b>c&&b<a)){
		printf("\nThe Second Number is 2nd largest, The Number is: %d", b);
	}
	else if((c>a&&c<b)||(c>b&&c<a)){
		printf("\nThe Third Number is 2nd largest, The Number is: %d", c);
	}
	else{
		printf("\nWrong Input");
	}
	return 0;
}
