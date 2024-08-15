#include <stdio.h>

int my_abs(int);

int main(int argc,char** argv){
    int n;
    printf("整数値を入力");
    scanf("%d",&n);
    printf("%dの絶対値は%dです\n",n,my_abs(n));
    return 0;
}

int my_abs(int a){
    if(a<0){
        return -a;
    }
    return a;
}