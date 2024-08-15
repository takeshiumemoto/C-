#include "triangle.h"

void showStars(int n){
    int i;
    for(i=0;i<n;i++){
        printf("★");
    }
    printf("\n");
}

void showTriangle(int n){
    int i;
    for(i=1;i<=n;i++){
        showStars(i);
    }
}