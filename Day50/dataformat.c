#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    char monthStr[12][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                            "Jul","Aug","Sep","Oct","Nov","Dec"};
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    printf("Converted date: %02d-%s-%04d\n", day, monthStr[month-1], year);

    return 0;
}

