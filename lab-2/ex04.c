#include <stdio.h>
#include <math.h>

int main(){

    char name[20];
    int std_id;
    float pro, phy, cal;
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &std_id);
    printf("Enter your Programming score: ");
    scanf("%f", &pro);
    printf("Enter your Physics score: ");
    scanf("%f", &phy);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal);

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, std_id, (pro + phy + cal)/3);
}