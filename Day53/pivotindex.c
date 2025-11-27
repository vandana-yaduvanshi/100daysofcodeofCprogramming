#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            printf("%d\n", i); // pivot index
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}

