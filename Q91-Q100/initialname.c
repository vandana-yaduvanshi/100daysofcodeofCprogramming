#include <stdio.h>

int main() {
    char name[200];
    int i;

    printf("Enter full name: ");
    scanf("%[^\n]s", name);

    // Print first character as initial
    if(name[0] != ' ')
        printf("%c ", name[0] - 32); // convert to uppercase if needed

    // Print initial after every space
    for(i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && name[i] != ' ')
            printf("%c ", (name[i] >= 'a' && name[i] <= 'z') ? name[i] - 32 : name[i]);
    }

    return 0;
}

