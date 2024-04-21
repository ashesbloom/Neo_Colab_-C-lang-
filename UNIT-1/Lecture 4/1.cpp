/*
 Problem Statement
    Olivia is an individual interested in understanding income tax calculations.
    Create a program to assist Olivia in calculating income tax based on her income.
    Prompt Olivia to input her income and utilize the ternary operator to calculate and
    display the corresponding tax amount, rounded to two decimal places, following these rules:

    No tax (0%) if income ≤ 2,50,000
    5% of income, if income ≤ 5,00,000 (inclusive)
    10% of income, if income ≤ 10,00,000 (inclusive)
    20% of income, for income > 10,00,000

 Input format :
    The input consists of an integer N, representing the income.

 Output format :
    The output displays a double value, representing the income tax amount, rounded off to two decimal places.
*/

#include <stdio.h>
//Clang-12.0.0
int main(void){
    int tax;
    scanf("%d",&tax);
    // Ternary operator to calculate the tax amount
    double result = (tax<=250000)?tax*0.00: // No tax (0%) if income ≤ 2,50,000
                    (tax<=500000)?tax*0.05:// 5% of income, if income ≤ 5,00,000 (inclusive)
                    (tax<=1000000)?tax*0.10:(tax/0.5)/10;// 10% of income, if income ≤ 10,00,000 (inclusive)
    printf("%.2lf",result);
}

// Created on 21-04-2024.

