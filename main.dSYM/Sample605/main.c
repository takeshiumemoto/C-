#include <stdio.h>

int main(int argc,char** argv){
    int a=10;
    int* p = &a;
    int** pp = &p;
    printf("a=%d &a=0x%x\n",a,&a);
    printf("*p=%d p=0x%x &p=0x%x",*p,p,&p);
    printf("*pp=0x%x pp=0x%x\n",*pp,pp);
    return 0;
}