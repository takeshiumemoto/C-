#include <stdio.h>

int main(int argc,char** argv){
    double one,two,three;
    double sum,avg;
    one = 1.2, two = 3.7,three = 4.1;
    printf("%f %f %f\n",one,two,three);
    sum = one + two +three;
    avg = sum/3,0;
    printf("合計値:%f\n",sum);
    printf("平均値:%f\n",avg);
    return 0;
    }