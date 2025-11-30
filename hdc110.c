#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, j, max;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        max = arr[i]; 

        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    return 0;
}