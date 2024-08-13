#include <stdio.h>

int main(int argc,char** argv){
    int a[] ={2,-4,9,5,10,7,-2}; // 配列aを初期化
    int i;
    
    // 配列の全要素を順に表示
    for(i=0;i<7;i++){
        printf("%d",a[i]);
    }
    printf("\n");

    // 偶数の要素のみを表示
    for(i=0;i<7;i++){
        if(a[i]%2==0){ // 偶数かどうかをチェック
            printf("%d",a[i]);
        }
    }
    printf("\n");

    for(i=0;i<7;i++){
        if(a[i]>0){
            printf("%d",a[i]);
        }
    }
    printf("\n");
    return 0;
}
