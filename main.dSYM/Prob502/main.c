#include <stdio.h>
#include <string.h>

int main(int argc,char** argv){
    char s1[256],s2[256],s[512];
    char* cp1=NULL, *cp2=NULL;
    printf("１つ目の文字列");
    scanf("%s",s1);
    printf("２つ目の文字列");
    scanf("%s",s2);

    cp1 =s1;
    cp2 =s;
    while(*cp1 !='\0'){
        *cp2 = *cp1;
        cp1++;
        cp2++;
    }
    cp1 = s2;
    while(*cp1 !='\0'){
        *cp2=*cp1;
        cp1++;
        cp2++;
    }
    *cp2 = '\0';

    printf("結合した文字列%s\n",s);
    return 0;
}