#include <stdio.h>
#include <math.h>

int sum_of_squares(int a, int b){
    return a*a + b*b;
}
int main(){
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of squares of %d and %d is %d\n", a, b, sum_of_squares(a, b));
}