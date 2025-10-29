#include <stdio.h>

int main() {
    char names[5][20];
    int i;

    printf("Enter names of 5 students:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("\nList of students:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
