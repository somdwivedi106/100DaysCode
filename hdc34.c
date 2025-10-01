#include<stdio.h>
int main() {
    int a, i;

    printf("enther a number ");
    scanf("%d", &a);

    if(a <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for(i = 2; i <= a/2; i++) {
        if(a % i == 0) {
            printf("Not a prime number\n");
            return 0;
        }
    }

    printf("The number is prime\n");
    return 0;
}
