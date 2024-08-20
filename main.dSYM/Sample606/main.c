#include <stdio.h>

void show(char**);

int main(int argc,char** argv){
    char* s[]={"Taro","Hanako","Tom"};
    int i;
    printf("** sの配列として表示**\n");
    for(i=0;i<3;i++){
        printf("%s\n",s[i]);
    }
    show(s);
    return 0;
}

void show(char** pps){
    int i;
    printf("**show関数として表示**\n");
    for(i=0;i<3;i++){
        printf("%s\n",pps[i]);
    }
}