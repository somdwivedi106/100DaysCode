#include<stdio.h>

int main(){

    int a,i,rev=0,rem;
    printf("enter the number");
    scanf("%d",&a);
    i=a;

    if(a>0){
        for(;a!=0;){
         rem = a%10;
         rev = rev*10 + rem;
         a = a/10;

    }
    }
       if(rev == i){
        printf("the no. is palindrome");
        }
    else{
        printf("not a palindrome number");
    }

    return 0;
}