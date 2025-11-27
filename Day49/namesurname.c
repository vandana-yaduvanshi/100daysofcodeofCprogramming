#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, startSurname = 0;

    printf("Enter full name: ");
    scanf("%[^\n]s", name);

    // Print first initial
    if(name[0] != ' ')
        printf("%c ", name[0] - 32);

    // Find initials and detect surname start index
    for(i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && name[i] != ' ') {
            // this could be surname, update startSurname each time
            startSurname = i;
            printf("%c ", (name[i] >= 'a' && name[i] <= 'z') ? name[i] - 32 : name[i]);
        }
    }

    // Print surname fully (from last space onwards)
    printf("%s", &name[startSurname]);

    return 0;
}

