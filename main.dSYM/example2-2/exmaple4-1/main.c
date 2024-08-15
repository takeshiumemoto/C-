#include <stdio.h>

int add3(int,int,int);
int main(int argc,char** argv){
    int a,b,c,sum;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    sum =add3(a,b,c);
    printf("a+b+c=%d\n",sum);
}

int add3(int a,int b, int c){
    return a+b+c;
}