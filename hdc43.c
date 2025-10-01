#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}

