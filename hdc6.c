#include <stdio.h>
int main() {
    int a, b, swap;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap = a;
    a = b;
    b = swap;

    printf("After swapping:  %d,  %d", a, b);

    return 0;
}
