#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for(int i = 0; i < n; i++) {
        int nextGreater = -1;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if(i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}

