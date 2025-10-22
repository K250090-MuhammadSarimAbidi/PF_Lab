#include <stdio.h>
int main() {
    int pin, digit;
    int  sum = 0;
    printf("Enter 4-digit PIN: ");
    scanf("%d", &pin);
    
    while (pin > 0) {
        digit = pin % 10;
        sum += digit;
        pin /= 10;
    }
    
    if (sum > 10)
        printf("Strong PIN (Sum = %d)\n", sum);
    else
        printf("Weak PIN (Sum = %d)\n", sum);
    return 0;
}
