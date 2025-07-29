#include <stdio.h>

int main(){
    int num, i, ans=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        ans*=i;
    }
    printf("Factorial of %d is %d\n", num, ans);
}