#include <stdio.h>

int main() {
    long long binary, temp;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    long long onesComplement = 0;
    long long place = 1;

    while (temp != 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number!\n");
            return 1;
        }

        digit = 1 - digit;

        onesComplement += digit * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement of %lld = %lld\n", binary, onesComplement);

    return 0;
}

