#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    for(i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
    }

    printf("Reversed words sentence: %s\n", str);

    return 0;
}

