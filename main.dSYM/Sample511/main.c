#include <stdio.h>
#include <string.h>

int main(int argc,char** argv){
    char s1[256],s2[256];
    int a = 100,b=200;
    sprintf(s1,"%d",a);
    sprintf(s2,"bの値は%dです",b);
    puts(s1);
    puts(s2);
    return 0;
}