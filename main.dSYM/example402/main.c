#include <stdio.h>

int num_divisors(int n);
void show_primes(int n);

int main(int argc, char** argv) {
    int num;
    printf("自然数を入力: ");
    scanf("%d", &num);
    show_primes(num);
    return 0;
}

int num_divisors(int n) {
    int i, count = 0;
    for(i = 1; i <= n; i++) {
        if (n % i == 0) {  // 修正: n を i で割る
            count++;
        }
    }
    return count;  // 修正: count を返す
}

void show_primes(int n) {
    int i = 2, j = 0;
    if (n <= 1) {
        printf("不適切な値です\n");
        return;
    }
    printf("1から%dまでの素数\n", n);  // 修正: %d を使用
    while(i <= n) {
        if (num_divisors(i) == 2) {  // 素数は約数が2つ
            printf("%d ", i);
            j++;
            if (j == 10) {
                printf("\n");
                j = 0;
            }
        }
        i++;
    }
    printf("\n");  // 出力の最後に改行を追加
}
