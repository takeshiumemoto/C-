#include <stdio.h>

int my_strlen(char*);

int main(int argc,char** argv){
    char str[256];
    int length;
    printf("文字列を入力:");
    scanf("%s",str);
    length = my_strlen(str);
    printf("文字列の長さ:%d\n",length);
    return 0;    
}

int my_strlen(char* s){
    int length = 0;
    while(*s !='\0'){
        length++;
        s++;
    }
    return length;
}