#include <stdio.h>

int main(int argc,char** argv){
    int i;
    for(i=0;i<5;i++){
        if(i==3){
            continue;
        }
        printf("i=%d\n",i);
    }
    return 0;
}