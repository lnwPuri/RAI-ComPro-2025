#include <stdio.h>

int main(){
    struct student{
        char name[100];
        int ID;
        float Math, English, Science, History;
        float av_all;
    }std[3];
    float av_score[4] = {0}; //Math, English, Science, History
    int i, j, max_ID, max_subj;
    float max_av=0, max_av_subj=0;
    for(i=0; i<3; i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s %d %f %f %f %f", std[i].name, &std[i].ID, &std[i].Math, &std[i].English, &std[i].Science, &std[i].History);
        std[i].av_all = (std[i].Math + std[i].English + std[i].Science + std[i].History)/4.0;
        av_score[0] += std[i].Math;
        av_score[1] += std[i].English;
        av_score[2] += std[i].Science;
        av_score[3] += std[i].History;
        if(std[i].av_all > max_av){
            max_av = std[i].av_all;
            max_ID = i;
        }
        printf("\n");
    }
    for(i=0; i<4; i++){
        av_score[i]/=3.0;
    }
    printf("Student Averages:\n");
    for(i=0; i<3; i++){
        printf("%s (ID: %d): %.2f\n", std[i].name, std[i].ID, std[i].av_all);
    }
    
    printf("\nTop Student: %s with %.2f.\n", std[max_ID].name, std[max_ID].av_all);
    printf("\nSubject Averages:\nMath: %.2f\nEnglish: %.2f\nScience: %.2f\nHistory: %.2f\n\n", av_score[0], av_score[1], av_score[2], av_score[3]);

    for(i=0; i<4; i++){
        if(av_score[i] > max_av_subj){
            max_av_subj = av_score[i];
            max_subj = i;
        }
    }
    switch(max_subj){
        case 0:
            printf("Top Subject: Math with average %.2f\n", max_av_subj);
            break;
        case 1:
            printf("Top Subject: English with average %.2f\n", max_av_subj);
            break;
        case 2:
            printf("Top Subject: Science with average %.2f\n", max_av_subj);
            break;
        case 3:
            printf("Top Subject: History with average %.2f\n", max_av_subj);
            break;
        defult:
            break;
    }
    

}