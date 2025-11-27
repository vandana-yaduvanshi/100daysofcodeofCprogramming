#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, mid;
    int result = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] >= x) {
            result = mid;       // possible answer
            high = mid - 1;     // search further left
        }
        else {
            low = mid + 1;      // move right
        }
    }

    printf("%d\n", result);
    return 0;
}

