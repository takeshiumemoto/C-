#include <stdio.h>

void showStatic();

int main(int argc,char** argv){
    showStatic();
    showStatic();
    return 0;
}

void showStatic(){
    static int s=100;
    printf("s=%d\n",s);
    s++;
}