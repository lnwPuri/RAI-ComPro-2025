#include <stdio.h>
#include <math.h>

int main(){
    struct coordinate{
        double x, y;
    }coor[2];
    int i;
    for(i=0; i<2; i++){
        printf("x%d: ", i+1);
        scanf("%lf", &coor[i].x);
        printf("y%d: ", i+1);
        scanf("%lf", &coor[i].y);
    }
    double d = sqrt((coor[1].x-coor[0].x)*(coor[1].x-coor[0].x) + (coor[1].y-coor[0].y)*(coor[1].y-coor[0].y));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n", coor[0].x, coor[0].y, coor[1].x, coor[1].y, d);
}