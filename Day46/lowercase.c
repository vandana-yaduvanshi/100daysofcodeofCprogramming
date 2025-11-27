#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // frequency array for a-z
    int i;

    printf("Enter a lowercase string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;   // increase frequency

        if(freq[str[i] - 'a'] == 2) {  // when it repeats
            printf("First repeating character: %c\n", str[i]);
            return 0;  // stop after first repeat
        }
    }

    printf("No repeating lowercase character found.\n");
    return 0;
}

