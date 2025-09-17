#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter the First Number: a =  ");
	scanf("%d", &a);
	
	printf("\nEnter the Second Number: b =  ");
	scanf("%d", &b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nNumbers after swapping are a = %d, b = %d ",a ,b);
	
	return 0;
}
