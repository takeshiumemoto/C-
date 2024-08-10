#include <stdio.h>

int main(int argc,char** argv){
    int dice;
    printf("サイコロの目(1-6):");
    scanf("%d",&dice);
    switch (dice){
        case 1:
        case 3:
        case 5:
            printf("奇数です\n");
            break;
        case 2:
        case 4:
        case 6:
            printf("偶数です");
            break;
        default:
            printf("範囲外です。\n");
            break;
    }  
    return 0;      
}