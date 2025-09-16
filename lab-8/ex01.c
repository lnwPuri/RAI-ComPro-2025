#include <stdio.h>

const float PI = 3.141592;

float circle_circumference(float r){
    return 2*PI*r;
}

float circle_area(float r){
    return PI*r*r;
}

int main(){
    float r;
    printf("Enter the radius in cm: ");
    scanf("%f", &r);
    printf("Circumference: %.2f\n", circle_circumference(r));
    printf("Area: %.2f\n", circle_area(r));

}