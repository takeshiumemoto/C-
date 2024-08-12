#include <stdio.h>

int main(int argc,char**argv){
    double d[3];
    double sum,avg;
    int i;
    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    sum = 0.0;
    for(i=0;i<3;i++){
        printf("%f",d[i]);
        sum += d[i];
    }
    printf("\n");
    avg = sum/3.0;
    printf("合計値:%f\n",sum);
    printf("平均値:%f\n",avg);
    return 0;
}