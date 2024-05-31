/*
 Problem Statement
    Mathew is developing a program to determine whether the digits of a given integer form an arithmetic sequence.
    An arithmetic sequence is a sequence of numbers in which the difference between consecutive terms is constant.
    Write a program that accomplishes this task using the auto keyword for local variable declarations.

 Example:
    Let us assume the number is 1234, the difference between all consecutive digits is 1, which is constant.
    So it forms an arithmetic sequence.

 Input format :
    The input consists of an integer N declared as an auto variable, representing the number to be checked.

 Output format :
    If the digits of N form an arithmetic sequence, the output prints "Yes".
    Otherwise, the output prints "No".

 */

#include <stdio.h>
//Clang-12.0.0
auto c =0;
int main() {

    int N;
    scanf("%d", &N);
    int lastDigit,secondLastDigit;
    int difference;
    bool isArithmeticSequence = true;

    lastDigit = N % 10;
    N /= 10;

    while (N > 0) {
        secondLastDigit = N % 10;
        difference = lastDigit - secondLastDigit;

        if ( N != 0 && difference != (N/10) % 10 - secondLastDigit){
            isArithmeticSequence = false; // Not an arithmetic sequence
            break;
        }
        lastDigit = secondLastDigit;
        N /=10;
    }

    if (isArithmeticSequence) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
// Created on 31-05-2024.

