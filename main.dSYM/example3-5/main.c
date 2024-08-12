#include <stdio.h>

int main(int argc,char** argv){
    int num=0;
    while(1){
        printf("正のせい数を入力してください");
        scanf("%d",&num);
        if (num>0){
            printf("%d\n",num);
        }
        else{
            printf("正の整数ではありません\n");
            break;
        }
    }
    return 0;
}