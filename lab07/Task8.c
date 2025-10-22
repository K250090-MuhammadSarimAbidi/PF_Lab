#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, equal = 1;

    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal && str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are NOT equal.\n");

    return 0;
}

