#include <stdio.h>
#include "triangle.h"


int main(int argc,char** argv){
    int num;
    printf("正のせい数を入力:");
    scanf("%d",&num);
    if(num>0){
        showTriangle(num);
    }
    else{
        printf("正の数を入力してください\n");
    }
    return 0;
}

