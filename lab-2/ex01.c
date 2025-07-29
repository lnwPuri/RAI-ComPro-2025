#include <stdio.h>

int main(){
    int x;
    float y;
    char z[1];

    printf("Please enter an integer value: \n");
    scanf("%d", &x);
    printf("You entered %d", x);

    printf("\nPlease enter a float value: \n");
    scanf("%f", &y);
    printf("You entered %.2f", y);

    printf("\nPlease enter a character: \n");
    scanf("%s", z);
    printf("You entered %s", z);
}