#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    int *rate = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &rate[i]);
    }

    int total = 0, maxIndex = 0;
    for (int i = 0; i < n; i++) {
        total += rate[i];
        if (rate[i] > rate[maxIndex]) maxIndex = i;
    }

    printf("Total ratings = %d\n", total);
    printf("Average ratings = %.2f\n", total/(float)n);
    printf("Highest rating category = %d\n", maxIndex);

    int idx, newVal;
    printf("Enter category index to update: ");
    scanf("%d", &idx);
    printf("Enter new rating: ");
    scanf("%d", &newVal);
    rate[idx] = newVal;

    printf("Updated ratings:\n");
    for (int i = 0; i < n; i++) printf("%d ", rate[i]);

    free(rate);
    return 0;
}
