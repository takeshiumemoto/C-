#include <stdio.h>

int main(int argc, char** argv) {
    int a;
    int b = 3;
    int add, sub;
    double avg;
    
    a = 6;
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0;

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d と %d の平均値: %lf\n", a, b, avg);

    return 0;
}
