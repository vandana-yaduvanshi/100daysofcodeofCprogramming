#include <stdio.h>

int main() {
    int arr[100], n, k;
    int maxSum = 0, windowSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    // Compute sum of first window
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window from index k to n-1
    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // Add next element, remove first of window
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}

