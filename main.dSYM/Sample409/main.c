#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc,char** argv){
    int a,b;

    srand((unsigned)time(NULL));
    a = rand()%10 + 1;
    b = rand()%10 + 1;
    printf("%d+%d=%d\n",a,b,a+b);
    return 0;
}