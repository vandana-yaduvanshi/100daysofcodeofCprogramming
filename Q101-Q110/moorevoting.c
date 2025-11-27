#include <stdio.h>

int main() {
    int nums[100], n;
    int candidate, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Find candidate using Moore's Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate actually appears > n/2 times
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate)
            count++;
    }

    if(count > n/2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}

