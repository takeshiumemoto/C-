#include <stdio.h>

void uppercase_str(char*,char*);

int main(int argc,char** argv){
    char str1[256],str2[256];
    printf("英単語を入力");
    scanf("%s",str1);
    uppercase_str(str1,str2);
    printf("変換後の文字列:%s\n",str2);
    return 0;
}

void uppercase_str(char* s1,char* s2){
    while(*s1 != '\0'){
        if(*s1>='a'&&*s1<='z'){
            *s2 = *s1-'a'+'A';
        }
        else {
            *s2 = *s1;
        }
        s1++;
        s2++;
    }
    *s2 = '\0';
}