#include <stdio.h>

int main(int argc,char**argv){
    char s1[4]={'a','b','c','\0'};
    char s2[]="Helloworld";
    char s3[10];
    printf("文字列を入力してください");
    scanf("%s",s3);
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
    printf("s3=%s\n",s3);
    return 0;
}