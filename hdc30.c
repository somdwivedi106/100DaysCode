#include<stdio.h>

int main(){
        int a,rem,rev=0;

    printf("enter a number");
    scanf("%d",&a);

    for(;a!=0;){
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;

    }
    printf("the reverse no is %d", rev);

    return 0;

}




