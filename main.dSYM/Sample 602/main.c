#include <stdio.h>
#include <stdlib.h>

void func1();
void func2();

int main(int argc,char** argv){
    void(*fp)()=NULL;
    fp = func1;
    fp();
    fp = func2;
    fp();
    return 0;
}

void func1(){
    printf("func1\n");
}

void func2(){
    printf("func2\n");
}