#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    gets(str); 
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        } else {
            len++;
        }
    }

    printf("The longest word is: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLen);
    return 0;
}

