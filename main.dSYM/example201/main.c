#include <stdio.h>

int main(int argc, char** argv) {
    int num;
    printf("整数値を入力:\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%dは偶数です\n", num);
    }
    return 0;
}
