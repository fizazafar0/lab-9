#include <stdio.h>

float calculateDiscount(char type, float amount){
    float rate = 0;
    if(type=='P' || type=='p') rate = 20;
    else if(type=='G' || type=='g') rate = 10;
    else if(type=='S' || type=='s') rate = 5;

    if(amount > 10000) rate += 2;

    return amount * rate / 100;
}

float calculateFinalBill(float discountedAmount){
    float tax = discountedAmount * 15 / 100;
    float shipping = (discountedAmount <= 5000) ? 300 : 0;
    return discountedAmount + tax + shipping;
}

int main(){
    char type;
    float cart;
    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);
    printf("Enter shopping cart value: ");
    scanf("%f", &cart);

    float discount = calculateDiscount(type, cart);
    float discountedAmount = cart - discount;
    float finalBill = calculateFinalBill(discountedAmount);

    printf("\nDiscount: Rs. %.2f\n", discount);
    printf("Amount after discount: Rs. %.2f\n", discountedAmount);
    printf("Final Payable (with Tax + Shipping): Rs. %.2f\n", finalBill);
    return 0;
}