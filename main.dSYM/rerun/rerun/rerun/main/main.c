#include <stdio.h>

int main(int argc, char** argv){
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 8; j++){
            if((i + j) % 2 == 0){
                printf("🔲");
            }
            else {
                printf("🔳");
            }
        }
        printf("\n"); // 1行分のパターンを描画した後で改行する
    }
    return 0; // 全ての行が描画された後にプログラムを終了する
}
