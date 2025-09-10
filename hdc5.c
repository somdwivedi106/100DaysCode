#include<stdio.h>
int main(){
    float celc,fahr;

    printf("enter temprature in celcius");
    scanf("%f", &celc);

    fahr = (celc * (9.0/5.0) ) + 32;
    printf("the temprature in fahrenheit is %f",fahr);
    
   

    return 0;
}
