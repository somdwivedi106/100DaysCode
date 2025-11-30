#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str); 

    while (str[length] != '\0') {
        length++;
    }

    j = length - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}