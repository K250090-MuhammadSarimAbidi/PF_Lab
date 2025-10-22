#include <stdio.h>
#include <ctype.h>
int main() {
    char ch, str[100];
    int vowels = 0, consonants = 0;
    int i;
    
    printf("Enter a word or sentence: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
    	ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            	vowels++;
			}
            else {
            	consonants++;
			}
        }
    }
    
    printf("Word: %s\n", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
