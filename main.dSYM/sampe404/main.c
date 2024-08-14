#include <stdio.h>

int max_num(int,int);
void show(int);
void line();

int main(int argc,char** argv){
    int n1=4,n2=5;
    line();
    show(n1);
    show(n2);
    printf("２つの数のうち、大きい数は、%dです\nです",max_num(n1,n2));
    line();
    return 0;
}

int max_num(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
void show(int n){
    printf("数値:%d\n",n);
    return ;
}
void line(){
    printf("********\n");
}
