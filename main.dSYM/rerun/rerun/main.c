#include <stdio.h>

int main(int argc,char** argv){
    int a,b,i,tmp;
    printf("数値を入力");
    scanf("%d",&a);
    printf("数値を入力");
    scanf("%d",&b);
    if (a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    for(i=a;i<=b;i++){
        printf("%d",i);
    }
    printf("\n");
    return 0;
}