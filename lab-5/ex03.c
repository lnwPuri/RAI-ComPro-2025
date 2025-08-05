#include <stdio.h>

int main(){
    int marks[5], sum=0, max=0, i;
    for(i=0; i<5; i++){
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    for(i=0; i<5; i++){
        if(marks[i]>max){
            max=marks[i];
        }
        sum+=marks[i];
    }
    printf("Total Marks : %d\n", sum);
    printf("Highest Marks: %d\n", max);
}