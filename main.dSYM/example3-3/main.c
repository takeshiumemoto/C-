#include <stdio.h>

int main(int argc,char**argv){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i>=j){
                printf("🔳");
            }
            else{
                printf("🔲");
            }
        }
        printf("\n");
    }
    return 0;
}