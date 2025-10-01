#include<stdio.h>

int main(){
  int a;
   printf("enter a number");
   scanf("%d", &a);

   if( a > 0)
   { printf("%d id positive");}
   else if(a < 0 ){
    printf("%d is negative ");
   }
   else{
    printf("the number is zero");
   }




    return 0 ;
}