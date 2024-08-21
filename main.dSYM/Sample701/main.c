#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    FILE* file;
    file = fopen("c\\test\\sample.txt","w");
    if(file==NULL){
        printf("ファイルが開けません。\n");
        return 1;
    }
    fprintf(file,"Hello World.\n");
    fprintf(file,"ABCDEF\n");
    fclose(file);
    return 0;
}