#include <stdio.h>

typedef struct {
    int x;
    int y;
    int z;
    char *label;
} point;

typedef struc {
    point points[50];
    char *label;
} curve;

curve curve1;
curve1.points[9].z = 10;

point points[10];

points[0].y = 20;

int main(){
    point point1;
    point1.x = 10;
    point1.y = 20;
    point1.z = 30;
    printf("La multiplication de mes coordonnees vaut %d", point1.x * point1.y * point1.z);

}