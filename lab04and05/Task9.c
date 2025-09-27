#include <stdio.h>
int main() {
    int dept, course;
    printf("1. CS\n2. EE\n3. BBA\nSelect Department: ");
    scanf("%d", &dept);

    switch(dept) {
        case 1:
            printf("1. Programming\n2. Data Structures\nChoice: ");
            scanf("%d", &course);
            switch(course) {
                case 1: printf("CS Course: Programming\n"); break;
                case 2: printf("CS Course: Data Structures\n"); break;
            }
            break;
        case 2:
            printf("1. Circuits\n2. Signals\nChoice: ");
            scanf("%d", &course);
            switch(course) {
                case 1: printf("EE Course: Circuits\n"); break;
                case 2: printf("EE Course: Signals\n"); break;
            }
            break;
        case 3:
            printf("1. Marketing\n2. Finance\nChoice: ");
            scanf("%d", &course);
            switch(course) {
                case 1: printf("BBA Course: Marketing\n"); break;
                case 2: printf("BBA Course: Finance\n"); break;
            }
            break;
        default: printf("Invalid Department.\n");
    }
    return 0;
}

