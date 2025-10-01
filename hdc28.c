#include<stdio.h>
int main(){
    int n,sum = 0,i = 1;

    printf("enter a limit n");
    scanf("%d", &n);

    while(i <= n){
        if(i%2 == 0){
            sum = sum+i;
        }
            i++;
            
    }
        printf("the sum of even number is %d",sum);
    
    return 0;
}