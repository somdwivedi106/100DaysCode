#include <stdio.h>

int main() {
    int arr[1000], n;
    int maxSum, currentSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    maxSum = currentSum = arr[0];

    
    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}