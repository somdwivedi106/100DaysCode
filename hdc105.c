#include <stdio.h>

int main() {
    int nums[100], n, i, count, majorityElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    majorityElement = -1;
    for(i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == nums[i]) {
                count++;
            }
        }
        if(count > n / 2) {
            majorityElement = nums[i];
            break;
        }
    }

    printf("Majority element is: %d\n", majorityElement);
    return 0;
}   