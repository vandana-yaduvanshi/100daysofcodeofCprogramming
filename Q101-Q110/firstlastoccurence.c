#include <stdio.h>

int main() {
    int nums[100], n, target;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    // Find first occurrence
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for(int i = n - 1; i >= 0; i--) {
        if(nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First occurrence index = %d\n", first);
    printf("Last occurrence index  = %d\n", last);

    return 0;
}

