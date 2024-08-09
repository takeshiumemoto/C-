#include <stdio.h>

int main(int argc, char** argv) {
    printf("%d + %d = %d\n", 5, 2, 5 + 2);
    printf("%d - %d = %d\n", 5, 2, 5 - 2);
    printf("%d * %d = %d\n", 5, 2, 5 * 2);
    printf("%d / %d = %d 余り %d\n", 5, 2, 5 / 2, 5 % 2);
    return 0;
}
