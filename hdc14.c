#include <stdio.h>

int main() {
    char a;
    printf("Enter a vowel") ;
    scanf("%c",&a);

    if(a== 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        printf("the alphabet is vowel");
    }
    else{
        printf("the alphabet is consonant");
    }


    
    return 0;
}
