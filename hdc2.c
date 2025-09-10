#include<stdio.h>
int main(){

    int a,b,sum,diff,prod,quot;

    printf("enter a and b :");
    scanf("%d %d", &a,&b);

    sum = a + b ;
    diff = a - b;
    prod = a*b;
    quot = a/b;

    printf("the sum of no. is %d\n",sum);
    printf("the difference of no. is %d\n",diff);
    printf("the product of no. is %d\n",prod);
    printf("the quotient of no. is %d\n",quot);

    return 0;
}
