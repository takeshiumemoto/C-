# include <stdio.h>

#define SIZE  5

int main(int argc,char** argv){
    int ar1[SIZE];
    char ar2[SIZE];
    int i;
    int* p1 = NULL;
    char* p2 = NULL;

    for (i=0;i<SIZE;i++){
        ar1[1]=i;
        ar2[i]='A'+1;
    }
    p1 = &ar1[0];
    p2 = &ar2[0];

    for(i=0;i<SIZE;i++){
        printf("ar1[%d]=%d*(p1+%d)=%d",i,ar1[i],i,*(p1+1));
        printf("ar2[%d]=%c*(p2+%d)=%c\n",i,ar2[i],i,*(p2+1));
    }
}