#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = pow(b,2) - 4*a*c;

    if(d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Real and distinct roots: %.2f, %.2f\n", r1, r2);
    } else if(d == 0) {
        r1 = -b / (2*a);
        printf("Real and equal roots: %.2f\n", r1);
    } else {
        printf("Imaginary roots.\n");
    }
    return 0;
}

