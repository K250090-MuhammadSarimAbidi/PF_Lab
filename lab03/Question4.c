#include <stdio.h>
int main (){
    float basic, hra, da, gross;
    
	printf ("Enter basic salary:");
    scanf("%f", &basic);
    
	hra = 0.10 * basic;
    da = 0.05 * basic;
    gross = basic + hra + da;
    
    printf("House Rent = %.2f\n", hra);
    printf("Dearness Allowance = %.2f\n", da);
	printf("Gross salary = %.2f\n", gross);
    return 0;
}
