#include <stdio.h>
int main() {
    int a, b, temp1, temp2;

    printf("enter two number a and b");
    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    while(temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }

    printf("HCF = %d\n", temp1);
    return 0;
}
