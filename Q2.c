#include <stdio.h>

void withdraw(float *balance, float amount){
    if(amount <= *balance){
        *balance -= amount;
        printf("Withdraw successful. New Balance: %.2f\n", *balance);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount){
    *balance += amount;
    printf("Deposit successful. New Balance: %.2f\n", *balance);
}

int main(){
    float balance = 50000;
    char choice;
    float amt;
    printf("Initial Balance: %.2f\n", balance);
    printf("Enter transaction type (d-debit, c-credit): ");
    scanf(" %c", &choice);
    printf("Enter amount: ");
    scanf("%f", &amt);

    if(choice=='d' || choice=='D') withdraw(&balance, amt);
    else deposit(&balance, amt);

    printf("Final Balance: %.2f\n", balance);
    return 0;
}