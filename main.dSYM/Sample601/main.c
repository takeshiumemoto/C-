#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(int argc,char** argv){
    int*p1 = NULL;
    double* p2 = NULL;
    int i;

    p1 =(int*)malloc(sizeof(int)*SIZE);
    p2 =(double*)malloc(sizeof(double)*SIZE);

    printf("p1=0x%x p2=0x%x\n",p1,p2);

    for(i=0; i<SIZE;i++){
        p1[i]=i;
        p2[i]=i/10;
    }

    for(i=0;i<SIZE;i++){
        printf("p1[%d]=%d p2[%d]=%f\n",i,p1[i],i,p2[i]);
    }
    free(p1);
    free(p2);
    return 0;
}