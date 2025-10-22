#include <stdio.h>
int main() {
    int mark, count = 0;
    float sum = 0;
    printf("Enter marks (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &mark);
        if (mark == -1) break;
        sum += mark;
        count++;
    }
    if (count == 0) printf("No marks entered.\n");
    else printf("Average = %.2f\n", sum / count);
    return 0;
}