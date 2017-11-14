#include <stdio.h>

typedef struct {
    int x;
    int y;
    int z;
    char *label;
} point;

typedef struct {
    point points[50];
    char *label;
} curve;

int inversePoint(point *pt){
    printf("Coordinate X for my point is %d", pt->x);
    pt->y = 40;
}

int main(){
    point point1;
    point1.x = 10;
    point1.y = 20;
    point1.z = 30;
    inversePoint(&point1);
    printf("Y is %d", point1.y);
}