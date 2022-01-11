/*Linear interpolation*/
#include <stdio.h>

int main(void){
    float x0, x1, x2, f0, f1, f2, x, h, r, f;
    
    x0=9.0;
    f0=2.197;
    x1=9.5;
    f1=2.251;
    x=9.2;
    x2=10.0;
    f2=2.3026;
    printf("input x0, f0: 9.0 2.197\n");

    printf("input x1,f1 : 9.5 2.251\n");

    printf("input x : 9.2\n");

    printf("input x2,f2 : 10.0 2.3026\n");
    h=x1-x0;
    r=(x-x0)/h;
    f=f0+r*(f1-f0);
    printf("補間値 f(%f)=%f\n",x,f);
    printf("真値 f(%f)\n",h);
    printf("誤差 f(%f)\n",r);
}