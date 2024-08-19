#include <stdio.h>

void count(char*,char);

int main(int argc,char** argv){
    char s[256],c;
    printf("英単語を入力:");
    scanf("%s",s);
    for(c='a';c<='z';c++){
        count(s,c);
    }
    for(c='A';c<='Z';c++){
        count(s,c);
    }
    return 0;
}

void count(char* s, char c){
    char* cp=s;
    int count = 0;
    while(*cp!='\0'){
        if(*cp == c){
            count++;
        }
        cp++;
    }
    if (count>0){
        printf("%c:%d文字\n",c,count);
    }
}