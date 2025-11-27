#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long total = 1LL * n * (n + 1) / 2;

    long long x = 1;
    while(x * x < total) {
        x++;
    }

    if(x * x == total)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}

