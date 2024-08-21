#include <stdio.h>

typedef struct{
    int a;
    double d;
}num_data;

void dealData1(num_data data);
void dealData2(num_data* pData);

int main(int argc,char** argv){
    num_data n1={1,1.2f},n2={1,1.2f};
    printf("n1のアドレス:0x%x n2のアドレス0x%x\n",&n1,&n2);
    dealData(n1);
    dealData(n2);
    printf("n1.a=%d n2.d = %f\n",n1.a,n1.d);
    printf("n2.a=%d n2.d = %f\n",n2.a,n2.d);
    return 0;
}

void dealData1(num_data data){
    printf("a=%d f=%f\n",data.a,data.d);
    printf("dataData1に渡ってきたデータのアドレス0x%x\n",&data);

    data.a=2;
    data.d=2.4;
}

void dealData2(num_data* pData){
    printf("a=%d f=%f\n",pData->a,pData->d);
    printf("dealData2にわたってきたデータのアドレス:0x%x\n",pData);

    pData->a=2;
    pData->d=2.4;
}