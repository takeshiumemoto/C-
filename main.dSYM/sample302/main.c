#include <stdio.h>

int main(int argc,char** argv){
    int i,j;
    for(i=1;i<=2;i++){
        for(j=1;j<=3;j++){
            printf("%d*%d=%d",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}