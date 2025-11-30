#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    
    
    int lastSeen[256];
    
   
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    
   
    for (int right = 0; right < n; right++) {
        char c = s[right];
        
       
        if (lastSeen[(unsigned char)c] >= left) {
           
            left = lastSeen[(unsigned char)c] + 1;
        }
        
       
        lastSeen[(unsigned char)c] = right;
        
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    scanf("%999s", s);
    
    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);
    
    return 0;
}