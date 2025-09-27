#include <stdio.h>
int main() {
    int age, movie;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 12)
        printf("Child Ticket\n");
    else if(age <= 60)
        printf("Adult Ticket\n");
    else
        printf("Senior Citizen Ticket\n");

    printf("Select Movie:\n1. Action\n2. Comedy\n3. Horror\nChoice: ");
    scanf("%d", &movie);

    switch(movie) {
        case 1: printf("Movie: Action\n"); break;
        case 2: printf("Movie: Comedy\n"); break;
        case 3: printf("Movie: Horror\n"); break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}

