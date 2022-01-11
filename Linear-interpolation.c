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
/*
input x0,f0 : 9.0 2.197
input x1,f1 : 9.5 2.251
input x2,f2 : 10.0 2.3026
input X : 9.2
補間値 f(9.200000)=2.218888
真値 f(0.500000)
誤差 f(0.400000)

input x0,f0 : 0.2 0.98006
input x1,f1 : 0.4 0.92106
input x2,f2 : 0.3 0.95534
input X : 0.28
補間値 f(0.280000)=0.945266
真値 f(0.200000)
誤差 f(0.400000)
*/