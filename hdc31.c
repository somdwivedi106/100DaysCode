#include <stdio.h>
int main() {
    int n, rem, rev = 0;

    
    scanf("%d", &n);
    if(n == 0) {
        printf("0");
        return 0;
    }
    while(n > 0) {
        rem = n % 2;
        rev = rev * 10 + rem;
        n = n / 2;
    }
    while(rev > 0) {
        printf("%d", rev % 10);
        rev = rev / 10;
    }
    return 0;
}
