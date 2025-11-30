#include <stdio.h>

int main() {
    int n, x;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for(x = 1; x <= n; x++) {
        int leftSum = (x * (x + 1)) / 2;  
        int rightSum = (n * (n + 1)) / 2 - leftSum + x;  
        if(leftSum == rightSum) {
            printf("Pivot integer found: %d\n", x);
            return 0;
        }
    }

    printf("No pivot integer found\n");
    return -1;
}   