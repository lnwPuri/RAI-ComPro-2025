#include <stdio.h>

int main(){
    char name[20], grade;
    float phy_score, sci_score, cal_score, av_score;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal_score);
    printf("Enter your Physic score: ");
    scanf("%f", &phy_score);
    printf("Enter your Science score: ");
    scanf("%f", &sci_score);

    av_score = (phy_score+sci_score+cal_score)/3;
    if(av_score>=80){
        grade = 'A';
    }else if(av_score>=70){
        grade = 'B';
    }else if(av_score>=60){
        grade = 'C';
    }else if(av_score>=50){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, av_score, grade);
}