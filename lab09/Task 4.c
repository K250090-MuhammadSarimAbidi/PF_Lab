#include <stdio.h>

void updateValue(int a) {
    a = a + 5;
}

void updateReference(int *a) {
    *a = *a + 5;
}

int main() {
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);
    printf("Before updateValue: %d\n", x);
    updateValue(x);
    printf("After updateValue: %d\n", x);

    printf("\nBefore updateReference: %d\n", x);
    updateReference(&x);
    printf("After updateReference: %d\n", x);

    return 0;
}

