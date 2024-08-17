#include <stdio.h>
#include <string.h>

int main(int argc,char** argv){
    char s[]="日本語の文字列";
    int len;
    len = strlen(s);
    printf("[%s]の長さは%dです\n",s,len);
    return 0;
}