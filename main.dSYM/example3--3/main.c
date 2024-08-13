#include <stdio.h>

int main(int argc, char** argv) {
    int i, j;
    for(j = 0; j < 8; j++) {         // 行ループ (縦方向)
        for(i = 0; i < 8; i++) {     // 列ループ (横方向)
            if((i + j) % 2 == 0) {
                printf("🔲");        // 偶数の位置に白い四角を配置
            } 
            else {
                printf("🔳");        // 奇数の位置に黒い四角を配置
            }
        }
        printf("\n");                // 行が終わったら改行
    }
    return 0;
}
