#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int category(char c) {
    if (isupper(c)) return 1;
    if (islower(c)) return 2;
    if (isdigit(c)) return 3;
    return 4;
}

int main() {
    int n;
    printf("Enter number of participants: ");
    scanf("%d", &n);
    getchar();

    char pattern[100];
    printf("Enter password pattern: ");
    fgets(pattern, 100, stdin);
    pattern[strcspn(pattern,"\n")] = 0;

    char **pass = malloc(n * sizeof(char*));
    float scores[n];

    for (int i = 0; i < n; i++) {
        char temp[100];
        printf("Enter password %d: ", i+1);
        fgets(temp, 100, stdin);
        temp[strcspn(temp,"\n")] = 0;

        pass[i] = malloc(strlen(temp)+1);
        strcpy(pass[i], temp);

        int len = strlen(pattern);
        int match = 0;
        for (int j = 0; j < len && j < strlen(temp); j++) {
            if (category(temp[j]) == category(pattern[j])) match++;
        }
        scores[i] = (match * 100.0) / len;
    }

    int best = 0;
    for (int i = 1; i < n; i++)
        if (scores[i] > scores[best]) best = i;

    printf("\nResults:\n");
    for (int i = 0; i < n; i++)
        printf("%s => %.2f%%\n", pass[i], scores[i]);

    printf("\nBest match: %s (%.2f%%)\n", pass[best], scores[best]);

    for (int i = 0; i < n; i++) free(pass[i]);
    free(pass);

    return 0;
}
