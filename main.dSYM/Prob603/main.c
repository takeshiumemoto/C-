#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
    double z;
}Point3D;

double distance3D(Point3D*,Point3D*);

int main(int argc,char** argv){
    Point3D p1={-1.0,0.0,2.0},p2={2.0,1.0,-1.0};
    double d=distance3D(&p1,&p2);
    printf("p1(%lf,%lf,%lf),p2(%lf,%lf,%lf)間の距離は%lfです\n",
    p1.x,p1.y,p1.z,p2.x,p2.y,p2.z,d);
    return 0;
}

double distance3D(Point3D* p1,Point3D* p2){
    double diff_x = p1->x - p2->x;
    double diff_y = p1->y - p2->y;
    double diff_z = p1->z - p2->z;
    double distance=
        sqrt(diff_x*diff_x+diff_y*diff_y+diff_y+diff_z*diff_z);
    return distance;
}