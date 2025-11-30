#include <stdio.h>

int main() {
    int nums[100], n, i, leftSum, rightSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }


    for(i = 0; i < n; i++) {
        leftSum = 0;
        rightSum = 0;

    
        for(int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        
        for(int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        if(leftSum == rightSum) {
            printf("Pivot index found at: %d\n", i);
            return 0;
        }
    }

    printf("No pivot index found\n");
    return -1;
}