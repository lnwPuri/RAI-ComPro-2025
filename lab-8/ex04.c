#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char inp[]){
    int i, count=0;
    for(i=0; i<strlen(inp); i++){
        inp[i]=tolower(inp[i]);
        if(inp[i]=='a' || inp[i]=='e' || inp[i]=='i' || inp[i]=='o' || inp[i]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    char inp[100];
    printf("Input: ");
    scanf("%[^\n]", inp);
    printf("Output: Number of vowels: %d\n", count_vowels(inp));
}