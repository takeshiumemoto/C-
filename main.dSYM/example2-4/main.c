#include <stdio.h>

int main(int argc,char**srgv){
    int month;
    printf("月（１〜１２）の価を入力してください");
    scanf("%d",&month);
    switch(month){
        case 12:
        case 1:
        case 2:
        printf("冬です");
        break;
        case 3:
        case 4:
        case 5:
        printf("春です");
        break;
        case 6:
        case 7:
        case 8:
        printf("夏です");
        break;
        case 9:
        case 10:
        case 11:
        printf("秋です");
        break;
        default:
        printf("不適切な価です");
        break;
    }
        return 0; 
}