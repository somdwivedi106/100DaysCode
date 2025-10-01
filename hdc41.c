#include <stdio.h>
int main() {
    int num, first, last, digits = 0, temp, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while(temp >= 10) {
        temp = temp / 10;
        pow10 *= 10;
    }

    first = temp;

    int middle = num % pow10;
    middle = middle / 10;

    int swapped = last * pow10 + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);
    return 0;
}
