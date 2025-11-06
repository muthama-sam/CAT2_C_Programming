//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:6/11/2025
Description:CAT2_gross tax ,netpay, taxes
*/

#include <stdio.h>

int main() {
    float hours, wage, grossPay, tax, netPay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    netPay = grossPay - tax;

    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}