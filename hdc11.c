#include<stdio.h>
int main(){
    
    int a;
    printf("enter the integer");
    scanf("%d",&a);

    if( a%2 == 0){
        printf("%d is even number",a);
    }
    else 
    {
        printf("the %d is odd");
    }

    return 0;
}