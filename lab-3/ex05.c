#include <stdio.h>
const float PI = 3.14159;
int main(){
    float h, r, v;

    printf("Enter cone hight: ");
    scanf("%f", &h);
    printf("Enter cone base radius: ");
    scanf("%f", &r);
    v = (PI*r*r*h)/3;

    printf("Cone volume = %.1f\n", v);
    if(v > 260){
        printf("This cone is perfect for Supun project\n");
    }else{
        printf("This cone is not fit for this project\n");
    }
}