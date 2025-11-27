#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0;
    int swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    // Count digits and find first digit
    int temp = num;
    int powerOfTen = 1;
    while (temp >= 10) {
        temp /= 10;
        powerOfTen *= 10;
        digits++;
    }
    firstDigit = temp;

    // If single digit, swapping does nothing
    if (num < 10) {
        swappedNum = num;
    } else { 
       swappedNum = lastDigit * powerOfTen            
                    + (num % powerOfTen) - lastDigit   
                    + firstDigit;                      
    }

    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}

