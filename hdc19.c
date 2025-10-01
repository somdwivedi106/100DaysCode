#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("enter the sides of the triangles");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c){
        printf("Equilateral triangle");
        
    }
    else if (a == b || b == c || a == c){
        printf("Isosceles trianlge");
    }
    else{
        printf("Scalene triangle");
    }

    return 0;
}
