#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    int i;
    char* a=(int*)malloc(sizeof(int)*10);
    for(i=0;i<10;i++){
        a[i]=i+1;
    }

    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}