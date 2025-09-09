#include <stdio.h>
int main(){
    int array[] = { 3, 1, 2, 4, 5, 6 }, i, max=-1000;
    int *ptr=array;

    for(i=0; i<6; i++, ptr++){
        if(*ptr>max) max=*ptr;
    }
    printf("Max value: %d\n", max);
}