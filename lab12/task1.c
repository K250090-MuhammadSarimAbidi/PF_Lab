#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter number of book categories: ");
    scanf("%d", &n);

    int *stock = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }

    int total = 0, minIndex = 0;
    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[minIndex]) minIndex = i;
    }

    printf("Total stock = %d\n", total);
    printf("Average stock = %.2f\n", total / (float)n);
    printf("Category with lowest stock = %d\n", minIndex);

    int idx, newVal;
    printf("Enter category index to update: ");
    scanf("%d", &idx);
    printf("Enter new stock: ");
    scanf("%d", &newVal);
    stock[idx] = newVal;

    printf("Updated values:\n");
    for (i = 0; i < n; i++) printf("%d ", stock[i]);

    free(stock);
    return 0;
}
