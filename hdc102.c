#include <stdio.h>

int main() {
    int arr[100], n, x, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    // Find the ceil of x
    int ceilIndex = -1;
    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil of %d is at index: %d\n", x, ceilIndex);
    return 0;
}