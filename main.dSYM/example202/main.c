# include <stdio.h>

int main(int argc,char** argv){
    int num;
    printf("整数値を入力");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%dは偶数です。\n",num);
    }
    else {
        printf("%dは奇数です。\n",num);
    }
    return 0;
}