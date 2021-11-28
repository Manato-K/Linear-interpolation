/*Linear interpolation*/
#include <stdio.h>

int main(void){
    float x0, x1, f0, f1, x, h, r, f;
    printf("input x0, f0:");
    scanf("%f %f",&x0,&f0);
    printf("input x1,f1 : ");
    scanf("%f %f",&x1,&f1);
    printf("input x : ");
    scanf("%f",&x);
    h=x1-x0;
    r=(x-x0)/h;
    f=f0+r*(f1-f0);
    printf("補間値 f(%f)=%f\n",x,f);
}