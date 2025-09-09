#include <stdio.h>
int main(){
    int size = 6, i, sum=0;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    for(i=0; i<size; i++){
        sum+=*(array+i);
    }

    printf("The sum of array is: %d\n", sum);
}