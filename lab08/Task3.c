#include <stdio.h>

int main() {
    char words[3][10] = {"Apple", "Orange", "Grape"};
    int i, j, count = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; words[i][j] != '\0'; j++) {
        	printf("%c", words[i][j]);
            char ch = words[i][j];
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
                count++;
            }
        }
        printf("\n");
    }

    printf("Total vowels: %d\n", count);
    return 0;
}
