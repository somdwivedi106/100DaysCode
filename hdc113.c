#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findKthSmallest(int arr[], int n, int k) {
    
    qsort(arr, n, sizeof(int), compare);
    
   
    return arr[k - 1];
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    
   
    if (k <= 0 || k > n) {
        printf("Invalid k value\n");
        return 1;
    }
    int result = findKthSmallest(arr, n, k);
    printf("%d\n", result);
    
    return 0;
}