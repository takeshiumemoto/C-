#include <stdio.h>

double avg3(double,double,double);

int main(int argc,char** argv){
    int i;
    double d[3],avg;
    for(i=0;i<3;i++){
        printf("%d番目の数値を入力:",i+1);
        scanf("%lf",&d[i]);
    }
    avg=avg3(d[0],d[1],d[2]);
    printf("平均値:%lf\n",avg);
    return 0;
}
double avg3(double d1,double d2,double d3){
    return (d1 + d2 + d3)/3.0;
}