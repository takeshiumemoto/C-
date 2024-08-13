#include <stdio.h>

int main(int argc, char** argv){
    int a[] = {3, 2, 9, 8, 5, 6, 5, 4, 1};
    int i, sum = 0, max_mum, min_mum;
    double avg;
    max_mum = a[0];
    min_mum = a[0];

    for(i = 0; i < 9; i++){
        printf("%d ", a[i]);
        if(max_mum < a[i]){
            max_mum = a[i];
        }
        if(min_mum > a[i]){
            min_mum = a[i];
        }
        sum += a[i];
    }
    printf("\n");
    avg = sum / 9.0;
    printf("合計値: %d 平均値: %.2f 最大値: %d 最小値: %d\n", sum, avg, max_mum, min_mum);
    
    return 0;
}
