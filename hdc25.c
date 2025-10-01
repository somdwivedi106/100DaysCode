#include <stdio.h>

int main(){

    float a,b;
    char c;

    printf("enter the no.");
   scanf("%f %f %c", &a, &b, &c);

    switch(c) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/': 
            if(b != 0) 
                printf("%.2f", a / b); 
            else 
                printf("Division by zero"); 
            break;
        case '%': 
            if((int)b != 0) 
                printf("%d", (int)a % (int)b); 
            else 
                printf("Division by zero"); 
            break;
        default: printf("Invalid operator");

}
 return 0;
}