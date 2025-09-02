#include <stdio.h>

int main(){
    struct vector{
        char name;
        float x, y;
    }vec[2];
    vec[0].name = 'u';
    vec[1].name = 'v';
    int i;
    for(i=0; i<2; i++){
        printf("%c_x: ", vec[i].name);
        scanf("%f", &vec[i].x);
        printf("%c_y: ", vec[i].name);
        scanf("%f", &vec[i].y);
    }
    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", vec[0].x+vec[1].x, vec[0].y+vec[1].y);
}