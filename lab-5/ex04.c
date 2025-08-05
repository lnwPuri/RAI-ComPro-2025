#include <stdio.h>

int main(){
    int even=0, odd=0, nums[10], i;
    for(i=0; i<10; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    for(i=0; i<10; i++){
        if(nums[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("odd numbers: %d\n", odd);
}