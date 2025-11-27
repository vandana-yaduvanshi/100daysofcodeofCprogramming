#include <stdio.h>

int main() {
    char str[200], ch;
    int i, freq = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    getchar(); // to clear newline from buffer

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            freq++;
    }

    printf("Frequency of '%c' is: %d\n", ch, freq);

    return 0;
}

