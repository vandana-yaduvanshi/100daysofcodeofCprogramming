#include <stdio.h>

int main() {
    float a, b, c;
    float discriminant;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float guess = discriminant / 2;
        float epsilon = 0.00001;
        while ((guess*guess - discriminant > epsilon) || (discriminant - guess*guess > epsilon)) {
            guess = (guess + discriminant / guess) / 2;
        }
        float root1 = (-b + guess) / (2*a);
        float root2 = (-b - guess) / (2*a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        float root = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", root, root);
    }
    else {
        printf("Roots are complex and cannot be computed without sqrt()\n");
    }

    return 0;
}

