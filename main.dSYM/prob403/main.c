#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc,char** argv){
    int a,b,ans,num;
    srand((unsigned)time(NULL));
    a=rand()%10+1;
    b=rand()%10+1;
    ans = a+b;
    printf("問題:%d+%d\n",a,b);
    while(1){
        printf("答えを入力:");
        scanf("%d",&num);
        if(num == ans){
            printf("正解です");
            break;
        }
        printf("間違いです");
    }
    return 0;
}