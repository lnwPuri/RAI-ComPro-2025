#include <stdio.h>

int main(){
    int array[100]={0}, num, i, max=0;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter %d integers: ", num);
    while(num--){
        scanf("%d", &i);
        if(i>max){
            max=i;
        }
        array[i]++;
    }
    for(i=0; i<=max; i++){
        if(array[i]>0){
            printf("Element %d occurs %d times\n", i, array[i]);
        }
    }
}