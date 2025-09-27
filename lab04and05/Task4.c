#include <stdio.h>
int main() {
    int category, item;
    printf("Select Category:\n1. Fast Food\n2. Drinks\nChoice: ");
    scanf("%d", &category);

    switch(category) {
        case 1:
            printf("1. Burger\n2. Pizza\nChoice: ");
            scanf("%d", &item);
            switch(item) {
                case 1: printf("You ordered a Burger \n"); break;
                case 2: printf("You ordered a Pizza \n"); break;
                default: printf("Invalid item \n");
            }
            break;
        case 2:
            printf("1. Coke\n2. Coffee \n3. Juice \nChoice: ");
            scanf("%d", &item);
            switch(item) {
                case 1: printf("You ordered a Coke \n"); break;
                case 2: printf("You ordered a Coffee \n"); break;
                case 3: printf("You ordered a Juice"); break;
                default: printf("Invalid item \n");
            }
            break;
        default: printf("Invalid category \n");
    }
    return 0;
}

