#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch(a>100 || a<1){
        case 1:
            printf("%d is out of range\n", a);
            break;
        case 0:
            switch(a%2){
                case 0:
                    printf("%d is even\n", a);
                    break;
                case 1:
                    printf("%d is odd\n", a);
                    break;
            }
            break;
    }
}