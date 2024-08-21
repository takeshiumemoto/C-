#include <stdio.h>

int g=10;

void showExterns();

int main(int argc,char** argv){
    printf("main関数:g=%d\n",g);
    showExterns();
    return 0;
}

void showExterns(){
    printf("showExterns関数:g=%d\n",g);
}