#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");   
    fgets(str, sizeof(str), stdin);
    
    printf("Characters of the string:\n");
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

