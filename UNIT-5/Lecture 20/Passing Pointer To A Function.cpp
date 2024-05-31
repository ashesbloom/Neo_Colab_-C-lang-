/*
 Problem Statement
    Design a program that mimics a digital calculator.
    Take an integer as input, use a function named sumOfDigits with a pointer to calculate the sum of its digits,
    and display the result. This simulates the process of manually adding up the individual digits of a number as you would on a calculator.
 Note: This question helps in clearing Wipro technical coding tests.

 Input format :
    The input consists of an integer N.

 Output format :
    The output prints an integer representing the sum of digits of N.
 */

#include <stdio.h>
//Clang-12.0.0
int sumOfDigits(int *num) {
    int sum = 0;
    while (*num != 0) {
        sum += *num % 10;
        *num /= 10;
    }
    return sum;
}

int main() {
    int N;

    scanf("%d", &N);

    int result = sumOfDigits(&N);

    printf("%d\n", result);

    return 0;
}

// Created on 31-05-2024.