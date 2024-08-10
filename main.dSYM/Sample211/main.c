#include <stdio.h>

int main(int argc,char** argv){
    int num1,num2;

    printf("num1=");
    scanf("%d",&num1);
    printf("num=2");
    scanf("%d",&num2);

    if(num1>0 && num2>0){
        printf("num1,num2ともに正の数です\n");
    }
    else {
        printf("num1,num2に正ではない数があります。\n");
    }
    return 0;
}