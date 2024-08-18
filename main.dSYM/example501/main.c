#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_even(int*);

int main(int argc, char** argv) {
    int a[10], i;
    srand((unsigned)time(NULL));
    printf("乱数: ");
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 10 + 1;  // 配列のi番目に乱数を代入
        printf("%d ", a[i]);  // 配列の要素を出力
    }
    printf("\n");

    show_even(a);
    return 0;
}

void show_even(int* a) {
    int i;
    printf("偶数: ");
    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);  // 偶数を出力
        }
    }
    printf("\n");
}
