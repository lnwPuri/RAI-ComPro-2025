#include <stdio.h>

int main(){
    struct student{
        char name[100];
        char surname[100];
        int age;
        float score;
    }std[3];
    int i;
    for(i=0; i<3; i++){
        printf("Student %d's name: ", i+1);
        scanf("%s %s", std[i].name, std[i].surname);
        printf("Student %d's age: ", i+1);
        scanf("%d", &std[i].age);
        printf("Student %d's score: ", i+1);
        scanf("%f", &std[i].score);
        printf("\n");
    }
    for(i=0; i<3; i++){
        printf("Student %d's name is \"%s %s\", age %d, score %.2f.\n", i+1, std[i].name, std[i].surname, std[i].age, std[i].score);
    }
    return 0;
}