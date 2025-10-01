#include <stdio.h>

int main() {
    float cp, sp,pp,lp;
    printf("enter the cost price(cp) and swlling price(sp)");
    scanf("%f %f", &cp, &sp);

    if (sp > cp){
        pp = ((sp - cp) / cp) * 100;
        printf("Profit prcentage: %.2f%%",pp );
    }
    else if (cp > sp){
        lp =  ((cp - sp) / cp) * 100 ;
        printf("Loss percentage: %.2f%%",lp);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}
