#include <stdio.h>
#include <math.h>
int main() {
    float loan, rate, EMI, SI, CI;
    int years, type;
    printf("\nEnter Loan Amount: ");
    scanf("%f", &loan);
    printf("\nEnter Time (years): ");
    scanf("%d", &years);
    printf("\nEnter Interest Type: \n1. Simple \n2. Compound\n ");
    scanf("%d", &type);
    printf("\nEnter annual interest rate (%%): ");
    scanf("%f", &rate);

//    if(type == 1) {
//        SI = (loan*rate*years)/100;
//        EMI = (loan + SI) / (years*12);
//        printf("Simple Interest EMI = %.2f\n", EMI);
//    } else {
//        CI = loan * pow((1+rate/100), years) - loan;
//        EMI = (loan + CI) / (years*12);
//        printf("Compound Interest EMI = %.2f\n", EMI);
//    }
    switch(type){
    	case 1: 
    		SI = (loan*rate*years)/100;
            EMI = (loan + SI) / (years*12);
            printf("Simple Interest EMI = %.2f\n", EMI);
			break;
		case 2:
			CI = loan * pow((1+rate/100), years) - loan;
            EMI = (loan + CI) / (years*12);
            printf("Compound Interest EMI = %.2f\n", EMI);
		
	}
    return 0;
}

