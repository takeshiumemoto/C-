#include <stdio.h>

int main(int argc,char** argv){
    int a,b;
    printf("1つ目の値:");
    scanf("%d",&a);
    printf("2つ目の数値");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    if(b!=0){
        printf("%d/%d=%d余り%d/n",a,b,a/b,a%b);
    }
    else{
        printf("０で割ることはできません");
    }
    return 0;
}