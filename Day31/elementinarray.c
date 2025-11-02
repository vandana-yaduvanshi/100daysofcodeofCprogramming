#include <stdio.h>

int main() {
    int n, key, found = 0, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            pos = i; 
            break;
        }
    }

    if (found)
        printf("%d found at position %d\n", key, pos + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}

