#include<stdio.h>

int main(){
    float radius,area,circumference,pi = 3.141592;
    

     printf("enter radius of circle ");
     scanf("%f", &radius);

     area = pi * (radius*radius);
     circumference = 2 * pi * radius;


    printf("%.2f is area\n %.2f is circumference",area,circumference);
    return 0;
    




    }