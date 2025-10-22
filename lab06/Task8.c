#include <stdio.h>

int main() {
    int n, i, j;
    int fact2n, factn1, factn, catalan;

    printf("Enter how many Catalan numbers to print: ");
    scanf("%d", &n);

    printf("First %d Catalan numbers:\n", n);

    for (i = 0; i < n; i++) {
        fact2n = 1;
        factn1 = 1;
        factn = 1;

        for (j = 1; j <= 2 * i; j++) {
            fact2n = fact2n * j;
        }

        for (j = 1; j <= i + 1; j++) {
            factn1 = factn1 * j;
        }

        for (j = 1; j <= i; j++) {
            factn = factn * j;
        }

        catalan = fact2n / (factn1 * factn);

        printf("%d ", catalan);
    }

    return 0;
}

