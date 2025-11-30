#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Updated array: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}