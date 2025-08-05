#include <stdio.h>

int main(){
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[9], i;
    for(i=0; i<9; i++){
        reversed[8-i]=original[i];
    }
    printf("Reversed Array: ");
    for(i=0; i<9; i++){
        printf("%d ", reversed[i]);
        if(i==9-1){
            printf("\n");
        }
    }
}