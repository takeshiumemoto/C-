#include <stdio.h>

int main(int argc,char** argv){
    double d[]={1.2,3.7,4,1};
    double sum,avg;
    int i;
    sum= 0.0;
    for(i=0;i<3;i++){
        printf("%f",d[i]);
        sum +=d[i];
    }
    printf("\n");
    avg = sum/3.0;
    printf("合計値:%f\n",sum);
    printf("平均値:%f\n",avg);
    return 0;
}