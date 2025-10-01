#include <stdio.h>

int main() {
    int n,j;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) break;
        }
        if(j*j > i) printf("%d ", i);
    }

    return 0;
}
