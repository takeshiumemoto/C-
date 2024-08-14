#include <stdio.h>

int main(int argc,char**argv){
    int a[]={3,2,9,8,5,6,5,4,1};
    int i,sum=0,max_num,min_num;
    double avg;
    max_num=a[0];
    min_num=a[0];
    for(i=0;i<9;i++){
        printf("%d",a[i]);
        if(max_num<a[i]){
            max_num=a[i];
        }
        if(min_num>a[i]){
            min_num =a[i];
        }
        sum += a[i];
    }
    printf("\n");
    avg = sum/9.0;
    printf("合計値:%d 平均値:%lf 最大値:%d 最小値:%d\n",sum,avg,max_num,min_num);
    return 0;
}

