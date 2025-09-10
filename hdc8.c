#include<stdio.h>
int  main(){

    int n,sum =0,i;

    printf("enter limit of n");
    scanf("%d", &n);

    for( i = 1 ; i<=n ; i++ ){
        sum = sum + i;
    
    }
    printf("the sum of %d no is %d",n,sum);

    return 0;
}