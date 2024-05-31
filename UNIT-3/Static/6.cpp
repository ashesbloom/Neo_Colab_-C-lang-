/*
 Problem Statement
    Meet Alex, a budget-savvy shopper who wants to give discounts to customers in the following ways:

    If the amount is greater than 5000 (not inclusive), the discount is 20%.
    If it is greater than 2000 (not inclusive), the discount is 15%.
    10% discount for a purchase amount greater than 1000 (not inclusive).

    Write a program that takes the amount as input and calculates the discounts using a function named applyDiscount.
    The discount rates are set as 10%, 15%, and 20% as global double datatype variables.

 Input format :
    The input consists of a double value representing the amount.

 Output format :
    The output displays "Discounted amount: " followed by a double value representing the discounted amount, rounded to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
double DISCOUNT_RATE_10 = 0.10;
double DISCOUNT_RATE_15 = 0.15;
double DISCOUNT_RATE_20 = 0.20;

double apply_discount(double amount) {
    double discounted_amount = amount;

    if (amount > 5000) {
        discounted_amount *= (1 - DISCOUNT_RATE_20);
    } else if (amount > 2000) {
        discounted_amount *= (1 - DISCOUNT_RATE_15);
    } else if (amount > 1000) {
        discounted_amount *= (1 - DISCOUNT_RATE_10);
    }
    return discounted_amount;
}

int main() {
    double input_amount, discounted_amount;
    scanf("%lf", &input_amount);

    discounted_amount = apply_discount(input_amount);

    printf("Discounted amount: %.2lf", discounted_amount);

    return 0;

}
// Created on 31-05-2024.
