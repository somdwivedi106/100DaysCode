#include <stdio.h>

int main() {
    int nums[100], n, i;
    int answer[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

   //Calculating all the elements except self...
    for(i = 0; i < n; i++) {
        int product = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }

    printf("Output: [");
    for(i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}   