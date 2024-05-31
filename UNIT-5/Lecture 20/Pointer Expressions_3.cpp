/*
 Problem Statement
    Alex has a credit card debt of a certain amount with a specified annual interest rate.
    He makes regular monthly payments to pay off the debt.
    Write a program to determine how many months it will take for Alex to pay off the debt,
    given the debt amount, annual interest rate, and monthly payment. Utilize pointers to calculate the result.

 Input format :
    The first line of input consists of a floating-point number, representing the initial debt amount.
    The second line consists of a floating-point number, representing the interest rate in percentage.
    The third line consists of a floating-point number, representing the monthly payment amount.

 Output format :
    The output prints the number of months it will take for Alex to pay off the debt.
 */

#include <stdio.h>
//Clang-12.0.0
void calculateMonths(float* debt, float* interestRate, float* monthlyPayment) {
    int months = 0;
    float monthlyInterestRate = *interestRate / (12 * 100);

    while (*debt > 0) {
        *debt = *debt + (*debt * monthlyInterestRate) - *monthlyPayment;
        months++;
    }

    printf("%d months", months);
}

int main() {
    float debt, interestRate, monthlyPayment;

    scanf("%f", &debt);

    scanf("%f", &interestRate);

    scanf("%f", &monthlyPayment);

    calculateMonths(&debt, &interestRate, &monthlyPayment);

    return 0;
}
//Created on 31-05-2024