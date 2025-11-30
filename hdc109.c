#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, sum = 0, maxSum = 0;

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

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i]; 
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}