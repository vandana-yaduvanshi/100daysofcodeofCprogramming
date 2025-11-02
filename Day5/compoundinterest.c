#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amount = 1;  // Used to calculate compound interest manually
    int i;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100);
    }

    compoundInterest = principal * amount - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}

