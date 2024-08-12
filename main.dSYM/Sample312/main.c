#include <stdio.h>

int main (int argc,char**argv){
    int n[5];
    int i;
    for(i=0;i<=10;i++){
        printf("i=%d",i);
        n[i]=i;
    }
    printf("\n");
    return 0;
}