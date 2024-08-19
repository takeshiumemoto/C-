#include <stdio.h>
#include <string.h>

int main(int argc,char** argv){
    char s1[256],s2[256],s[512];
    printf("１つ目の文字列;");
    scanf("%s",s1);
    printf("２つ目の文字列");
    scanf("%s",s2);
    strcpy(s,s1);
    strcat(s,s2);
    printf("結合した文字列%s\n",s);
    return 0;
}