#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[256];
    int age;
}student_data;

void setData(student_data*,int,char*,int);
void showData(student_data*);

int main(int argc,char** argv){
    student_data data[4];
    int i;
    int id[]={1,2,3,4,};
    char name[][256]={"山田太郎","佐藤良子","太田隆","中田涼子"};
    int age[]={18,19,18,18};
    for(i=0;i<4;i++){
        setData(&data[i],id[i],name[i],age[i]);
    }
    for (i=0;i<4;i++){
        showData(&data[i]);
    }
    return 0;
}

void setData(student_data* pData,int id,char* name,int age){
    pData->id = id;
    strcpy(pData->name, name);
    pData->age=age;
}

void showData(student_data* pData){
    printf("学生番号:%d 名前:%s 年齢%d\n",
    pData->id,pData->name,pData->age);
}