#include <stdio.h>

int main(){
    char name[30], u_name[20];
    int age;
    float h;
    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &h);
    printf("Enter your University name: ");
    scanf("%s", u_name);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall.", name, u_name, age, h);
}