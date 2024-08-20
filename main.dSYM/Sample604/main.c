#include <stdio.h>

void funcp(int(*)(int),int n);

int db1(int);
int hlf(int);

int main(int argc,char** argv){
    funcp(db1,8);
    funcp(hlf,8);
    return 0;
}

void funcp(int (*f)(int),int n){
    printf("引数:%d 結果%d\n",n,f(n));
}

int db1(int n){
    return n*2;
}
int hlf(int n){
    return n/2;
}