#include <stdio.h>

int max_n(int,int);
int min_n(int,int);

int main(int argc,char** argv){
    int(*cmp)(int,int) = max_n;
    int a=1,b=2;
    printf("%dと%dのうち、最大のものは%d\n",a,b,cmp(a,b));
    cmp = min_n;
    printf("%dと%dのうち、最小のものは%d\n",a,b,cmp(a,b));
    return 0;
}

int max_n(int m,int n){
    if(m>n){
        return m;
    }
    return n;
}

int min_n(int m,int n){
    if(m<n){
        return m;
    }
    return n;
}