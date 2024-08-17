#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    char s1[]="1000";
    char s2[]="12.345";
    int a;
    double b;
    a = atoi(s1);
    b = atof(s2);
    printf("a=%d b=%f\n",a,b);
    return 0;
}