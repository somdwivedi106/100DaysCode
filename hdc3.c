#include<stdio.h>

int main(){
    int length,breadth,area,perimeter;
    

     printf("enter lenght and breadth ");
     scanf("%d %d", &length, &breadth);

     area = length*breadth;
     perimeter = 2*(length + breadth);


    printf("%d is area\n %d is perimeter",area,perimeter);
    return 0;
    

}