#include <stdio.h>

int main(int argc,char** argv){
    int a=100;
    double b=123.4;
    float c=123.4f;
    char d ='a';
    printf("aの値は%d、大きさは%dbyte,アドレスは0x%x\n",a,sizeof(int),&a);
    printf("bの値は%f,大きさは%dbyte,アドレスは0x%x\n",c,sizeof(double),&b);
    printf("cの値は%f,大きさは%dbyte,アドレスは0x%x\n",c,sizeof(float),&c);
    printf("dの値は%c,大きさは%dbyte,アドレスは0x%x\n",d,sizeof(char),&d);
    return 0;
    }   