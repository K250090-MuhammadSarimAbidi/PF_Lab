#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of feedback entries: ");
    scanf("%d", &n);
    getchar();

    char **fb = malloc(n * sizeof(char*));

    int totalChars = 0, longest = 0;
    for (int i = 0; i < n; i++) {
        char temp[500];
        printf("Enter feedback %d: ", i+1);
        fgets(temp, 500, stdin);

        fb[i] = malloc(strlen(temp) + 1);
        strcpy(fb[i], temp);

        totalChars += strlen(temp);
        if (strlen(fb[i]) > strlen(fb[longest])) longest = i;
    }

    printf("\nTotal characters = %d\n", totalChars);
    printf("Longest entry: %s\n", fb[longest]);
    printf("\nAll entries:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", fb[i]);
        free(fb[i]);
    }
    free(fb);
    return 0;
}
