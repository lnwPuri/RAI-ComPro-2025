#include <stdio.h>
int main(){
    int op;
    float balance=0, in, out;
    while(op!=4){
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &in);
                balance += in;
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &out);
                balance -= out;
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            defult:
                break;
        }
    }
}