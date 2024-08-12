#include <stdio.h>

int main(int argc,char** argv){
    int i,num;
    printf("正の数を入力してください");
    scanf("%d",&num);
    if(num>0){
        for(i=1;i<=num;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    else {
        printf("入力した値は不適切です\n");
    }
    return 0;
}