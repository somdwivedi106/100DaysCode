#include <stdio.h>
int main() {
    int n, rem, comp = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        if(rem == 0)
            rem = 1;
        else
            rem = 0;
        comp = comp + rem * place;
        place *= 10;
        n = n / 10;
    }

    printf("1's complement = %d\n", comp);
    return 0;
}
