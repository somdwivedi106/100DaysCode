#include <stdio.h>

int main() {
    char date[15];   
    int day, month, year;
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    if (month == 4) {
        printf("%02d-Apr-%d", day, year);
    } else {
        printf("Month not supported in this example.");
    }

    return 0;
}
