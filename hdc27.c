#include<stdio.h>
int main(){
    int n,sum = 0,i;

    printf("enter a limit n");
    scanf("%d", &n);

    for(i = 1; i<=n ; i += 2){
        sum = sum + i 
    }
        printf("the sum of odd number is %d",sum);
    
    return 0;
}