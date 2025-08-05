#include <stdio.h>

int main(){
    int i, nums[8];
    for(i=0; i<8; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    int max=nums[0], min=nums[0];
    for(i=0; i<8; i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
    }
    printf("The smallest numbers in the array is %d\n", min);
    printf("The largest numbers in the array is %d\n", max);
}