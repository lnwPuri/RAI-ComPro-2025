#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Enter integer #1: ");
    scanf("%d", &a);
    printf("Enter integer #2: ");
    scanf("%d", &b);
    printf("Enter integer #3: ");
    scanf("%d", &c);

    int min = a;
    int max = a;
    if(b<a){
        min = b;
    }
    if(c<a){
        min = c;
    }
    if(b>a){
        max = b;
    }
    if(c>a){
        max = c;
    }
    int sum = a+b+c;
    float av = (a*1.0+b*1.0+c*1.0)/3;
    printf("Result:\nMinimum: %d\nMaximum: %d\nSum: %d\nAverage: %.2f\n", min, max, sum, av);
}