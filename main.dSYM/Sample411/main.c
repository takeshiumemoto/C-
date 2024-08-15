#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int n = -2;
    double d1 = -2.5, d2 = 4.0;
    printf("%dの絶対値は%d\n",n,abs(n));
    printf("%fの絶対値は%f\n",d1,fabs(d1));
    printf("%fの２条は%fです。\n",d2,pow(d2,2));
    printf("%fの平方根は%fです。\n",d2,sqrt(d2));
    return 0;
}