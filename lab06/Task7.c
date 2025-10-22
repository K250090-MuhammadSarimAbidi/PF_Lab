#include <stdio.h>
int main() {
    int num, temp, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    
    num == rev ? printf("%d is a Palindrome.\n", num) : printf("%d is not a Palindrome.\n", num);
    
	return 0;
}
