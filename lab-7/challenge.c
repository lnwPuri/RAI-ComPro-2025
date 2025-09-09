#include <stdio.h>

int main(){
    int num[10]={0}, i, j, temp;

    printf("Enter 5 integers: ");
    for(i=0; i<5; i++){
        scanf("%d", num+i);
    }

    for(i=4; i>0; i--){
        for(j=0; j<i; j++){
            if(*(num+j+1)<*(num+j)){
                temp=*(num+j);
                *(num+j)=*(num+j+1);
                *(num+j+1)=temp;
            }
        }
    }

    printf("Sorted: ");
    for(i=0; i<5; i++){
        printf("%d ",*(num+i));
    }
    printf("\n");
}