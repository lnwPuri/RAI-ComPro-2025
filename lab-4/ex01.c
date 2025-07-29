#include <stdio.h>

int main(){
    int num, i, sum=0;
    for(i=0; i<10; i++){
        printf("%d. Enter the number: ", i+1);
        scanf("%d", &num);
        sum += num;
    }
    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", (sum*1.0)/10);
}