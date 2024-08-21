#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[256];
    int age;
};

int main(int argc,char** argv){
    struct student data;
    data.id = 1;
    strcpy(data.name,"山田太郎");
    data.age=18;
    printf("学籍番号:%d 名前:%s 年齢:%d \n",data.id,data.name,data.age);
    return 0;
}