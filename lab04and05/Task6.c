#include <stdio.h>
#include <math.h>
int main() {
    int shape, choice;
    float r, l, w, b, h;
    printf("1. Circle \n2. Rectangle \n3. Triangle \nChoose shape: ");
    scanf("%d", &shape);

    switch(shape) {
        case 1:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &choice);
            printf("Enter radius: ");
            scanf("%f", &r);
            switch(choice) {
                case 1: printf("Area = %.2f\n", M_PI*r*r); break;
                case 2: printf("Perimeter = %.2f\n", 2*M_PI*r); break;
            }
            break;
        case 2:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &choice);
            printf("Enter length and width: ");
            scanf("%f %f", &l, &w);
            switch(choice) {
                case 1: printf("Area = %.2f\n", l*w); break;
                case 2: printf("Perimeter = %.2f\n", 2*(l+w)); break;
            }
            break;
        case 3:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &choice);
            if(choice == 1) {
                printf("Enter base and height: ");
                scanf("%f %f", &b, &h);
                printf("Area = %.2f\n", 0.5*b*h);
            } else {
                float a2, b2, c2;
                printf("Enter three sides: ");
                scanf("%f %f %f", &a2, &b2, &c2);
                printf("Perimeter = %.2f\n", a2+b2+c2);
            }
            break;
        default: printf("Invalid shape \n");
    }
    return 0;
}

