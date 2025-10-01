#include <stdio.h>

int main() {
    int u;
    int bill = 0;

    printf("unit of electricity consumed");
    scanf("%d", &u);

    if (u <= 100){
        bill = u*5;
        printf("electricity bill: ₹%d", bill);
    }
    else if (u <= 200){
        bill = 100*5 + (u-100)*7;
       printf("electricity bill : ₹%d", bill);
    }
    else if (u <= 300){
        bill = 100*5 + 100*7 + (u-200)*10;
       printf("electricity bill: ₹%d", bill);
    }
    else if (u >= 300){
       bill = 100*5 + 100*7 + 100*10 + (u-300)*12;
       printf("electricity bill: ₹%d", bill);
    }
    return 0;
}
