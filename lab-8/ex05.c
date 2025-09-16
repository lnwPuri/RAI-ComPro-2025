#include <stdio.h>

int num, inp[100];

int sum_even(){
    int i, sum_even=0;
    for(i=0; i<num; i++){
        if(inp[i]%2==0){
            sum_even+=inp[i];
        }
    }
    return sum_even;
}
int sum_odd(){
    int i, sum_odd=0;
    for(i=0; i<num; i++){
        if(inp[i]%2==1){
            sum_odd+=inp[i];
        }
    }
    return sum_odd;
}
int main(){
    int i;
    printf("N: ");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("Input: ");
        scanf("%d", &inp[i]);
    }
    printf("Output: Sum of even number: %d\nSum of odd number: %d\n", sum_even(), sum_odd());
}