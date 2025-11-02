#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; 

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;
    if (temp < 0) temp = -temp; 

    while (temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = count[0], maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most frequently: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}

