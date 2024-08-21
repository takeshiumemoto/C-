#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int i,n,sum=0;
    for(i=1;i<argc;i++){
        n= atoi(argv[i]);
        printf("%d",n);
        sum+=n;
    }
    printf("\n合計%d\n",sum);
}