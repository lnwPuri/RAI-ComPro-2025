#include <stdio.h>

int main(){
    int q, i;
    float score[11];
    char subject[100][100], grade[100];
    printf("Enter number of subjects (max 10): ");
    scanf("%d", &q);

    for(i=1; i<=q; i++){
        printf("Enter subject %d: ", i);
        scanf("%s", subject[i]);
        printf("Enter %s score: ", subject[i]);
        scanf("%f", &score[i]);
    }

    float GPA=0;
    printf("%-12s%-12s%-12s%-12s\n", "Subject", "Score", "Grade", "Grade");
    printf("---------------------------------------------\n");
    for(i=1; i<=q; i++){

        if(score[i]>=80){
            grade[i] = 'A';
        }else if(score[i]>=70){
            grade[i] = 'B';
        }else if(score[i]>=60){
            grade[i] = 'C';
        }else if(score[i]>=50){
            grade[i] = 'D';
        }else{
            grade[i] = 'F';
        }

        printf("%-12s%-12.0f%-12c%-12.1f\n", subject[i], score[i], grade[i], 69.0-grade[i]);
        GPA += 69.0-grade[i];
    }
    GPA /= q*1.0;
    printf("GPA: %.1f\n", GPA);
}

/*
3
cal
85
physic
73
compro
92
*/