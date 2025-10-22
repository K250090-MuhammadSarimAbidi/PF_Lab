#include <stdio.h>
int main() {
    int num, even = 0, odd = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10;
        digit % 2 == 0? even++: odd++;
        num /= 10;
    }
    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);
    return 0;
}
