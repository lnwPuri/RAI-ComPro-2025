#include <stdio.h>

void prime(int start, int end){
    int i;
    printf("\n");
    for(i=start; i<=end; i++){
        int check=i;
        while(check-->1){
            if(i%check==0){
                break;
            }
        }
        if(check==1){
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main(){
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    printf("\nThe prime numbers within the intervals are: ");
    prime(start, end);
}