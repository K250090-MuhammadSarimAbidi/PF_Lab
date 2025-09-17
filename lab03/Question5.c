#include <stdio.h>
#include <string.h>  

int main() {
    char name[50];
    int age;
    char course[50];
    char result[20];

    printf("\nEnter your Name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nEnter your Age: ");
    scanf("%d", &age);
    getchar(); 
    
    printf("\nEnter your Course: ");
    fgets(course, sizeof(course), stdin);

    printf("\nEnter your Result: ");
    fgets(result, sizeof(result), stdin);

    printf("\n--- Student Information ---\n");
    printf(" Name   : %s\n", name);
    printf(" Age    : %d\n", age);
    printf(" Course : %s\n", course);
    printf(" Result : %s\n", result);

    return 0;
}

