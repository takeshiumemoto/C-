#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
}Point2D;

double distance2D(Point2D*,Point2D*);

int main(int argc,char** argv){
    Point2D p1={-1.0,0.0},p2={2.0,1.0};
    double d =distance2D(&p1,&p2);
    printf("p1(%lf,%lf),p2(%lf,%lf)間の距離は%lfです\n",
    p1.x,p1.y,p2.x,p2.y,d);
    return 0;
}
double distance2D(Point2D* p1,Point2D* p2){
    double diff_x = p1->x-p2->x;
    double diff_y = p1->y-p2->y;
    double distance = sqrt(diff_x*diff_x + diff_y*diff_y);
    return distance;
}