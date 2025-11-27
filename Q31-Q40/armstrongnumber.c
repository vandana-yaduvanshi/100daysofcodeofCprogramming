#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int temp;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 1; i <= n; i++) {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}

