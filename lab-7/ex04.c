#include <stdio.h>

int main(){
    int size = 6, i;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr=array;
    for(i=0; i<size; i++, ptr++){
        printf("%d\n", *ptr);
    }
}