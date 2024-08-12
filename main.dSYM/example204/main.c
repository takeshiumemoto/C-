#include <stdio.h>

int main(int argc,char** argv){
    double r;
    printf("円の半径を入力:");
    scanf("%lf",&r);
    printf("面積:%lf 円周:%lf\n",3.14 * r * r,2*3.14*r);
    return 0;
}
