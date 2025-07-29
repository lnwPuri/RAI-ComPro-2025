#include <stdio.h>

int main(){
    char name[20], gender[1], ed_q[20];
    int age;
    float h, w;

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &h);
    printf("Enter your weight: ");
    scanf("%f", &w);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your Education Qualification: ");
    scanf("%s", ed_q);

    printf("\nName: %-11s \t Age: %-11d \t Gender: %s \nHeight: %-9.2f \t Weight: %.2f\nEducation: %s\n", name, age, gender, h, w, ed_q);
}