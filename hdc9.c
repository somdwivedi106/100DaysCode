#include<stdio.h>
#include<math.h>
int main(){
  float time,rate,principal,SI,CI;
  
  printf("enter time, rate of interest, pinciple amount,");
  scanf("%f %f %f",&time,&rate,&principal);

  SI = (principal * rate * time)/100.0 ;
  CI = principal * pow((1 + rate / 100), time) - principal;
  printf("the simple interest is %.2f\n compound interest is %.2f\n",SI,CI);


  return 0;


}