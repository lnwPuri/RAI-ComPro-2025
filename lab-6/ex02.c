#include <stdio.h>

int main(){
    int highest_score = 0, ID;
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
        if(std[i].score > highest_score){
            highest_score=std[i].score;
            ID=i;
        }
    }
    printf("The highest scores belongs to %s %s at %.1f scores.\n", std[ID].name, std[ID].surname, std[ID].score);
    return 0;
}