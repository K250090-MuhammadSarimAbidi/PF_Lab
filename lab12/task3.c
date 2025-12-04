#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int containsDigit(char *str) {
    while (*str) {
        if (isdigit(*str)) return 1;
        str++;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter number of usernames: ");
    scanf("%d", &n);
    getchar();

    char **users = malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        char temp[100];
        printf("Enter username %d: ", i+1);
        fgets(temp, 100, stdin);
        temp[strcspn(temp, "\n")] = 0;

        users[i] = malloc(strlen(temp)+1);
        strcpy(users[i], temp);
    }

    printf("\nValid usernames:\n");
    for (int i = 0; i < n; i++) {
        if (!containsDigit(users[i])) {
            printf("%s\n", users[i]);
        }
        free(users[i]);
    }

    free(users);
    return 0;
}
