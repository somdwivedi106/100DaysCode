#include <stdio.h>

int main() {
    int d;
    int fine = 0;

    printf("enter the number of days for late submission");
    scanf("%d", &d);

    if (d <= 5){
        fine = d * 2;
        printf("Fine: ₹%d", fine);
    }
    else if (d <= 10){
        fine = 5*2 + (d-5)*4;
        printf("Fine: ₹%d", fine);
    }
    else if (d <= 30){
        fine = 5*2 + 5*4 + (d-10)*6;
        printf("Fine: ₹%d", fine);
    }
    else
        printf("Membership Cancelled");

    return 0;
}
