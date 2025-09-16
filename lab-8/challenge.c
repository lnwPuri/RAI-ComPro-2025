#include <stdio.h>

struct std{
    char name[100];
    float grade;
}s[100];
float num;
int hi=0, low=100;

float av_grade(){
    int i, av=0;
    for(i=0; i<num; i++){
        av+=s[i].grade;
    }
    return av/num;
}

void hi_low_grade(){
    int i;
    for(i=0; i<num; i++){
        if(s[i].grade>hi){
            hi=s[i].grade;
        }
        if(s[i].grade<low){
            low=s[i].grade;
        }
    }
}

void passed(){
    int i;
    for(i=0; i<num; i++){
        if(s[i].grade>=60){
            printf("%s\n", s[i].name);
        }
    }
}

int main(){
    
    int i;
    printf("Enter number of students: ");
    scanf("%f", &num);
    printf("\n");
    for(i=0; i<num; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter grade of %s: ", s[i].name);
        scanf("%f", &s[i].grade);
        printf("\n");
    }

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", av_grade());
    hi_low_grade();
    printf("Highest grade: %d\n", hi);
    printf("Lowest grade: %d\n\n", low);

    printf("Students who passed:\n");
    passed();
}