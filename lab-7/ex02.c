#include <stdio.h>

int main(){
    int a=0;
    int b=5;
    int *pa=&a;
    int *pb=&b;
    int temp=*pa;
    printf("Before reverse: a = %d, b = %d\n", a, b);
    *pa=*pb;
    *pb=temp;
    printf("After reverse: a = %d, b = %d\n", a, b);
}