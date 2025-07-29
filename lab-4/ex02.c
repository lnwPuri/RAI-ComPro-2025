#include <stdio.h>

int main(){
    int num, i=10, sum=0;
    while(i--){
        printf("%d. Enter the number: ", 10-i);
        scanf("%d", &num);
        sum += num;
    }
    printf("total sum is %d\n", sum);
}