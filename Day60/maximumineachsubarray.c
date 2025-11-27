#include <stdio.h>

int main() {
    int arr[100], n, k;

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

    printf("Maximum elements in each window: ");

    for(int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];

        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > maxVal)
                maxVal = arr[j];
        }

        printf("%d", maxVal);
        if(i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}

