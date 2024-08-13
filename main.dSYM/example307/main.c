#include <stdio.h>

int main(int argc,char**argv){
    int a[9][9]; // 9x9の配列を宣言
    int i,j;

    // 九九の計算結果を配列aに格納
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){ // 修正: jを使う
            a[i-1][j-1] = i * j; // i*jの結果をa[i-1][j-1]に格納
        }
    }

    // 配列に格納された結果を表示
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%d*%d=%2d ",i,j,a[i-1][j-1]); // スペースを追加して整列
        }
        printf("\n");
    }
    return 0;
}
