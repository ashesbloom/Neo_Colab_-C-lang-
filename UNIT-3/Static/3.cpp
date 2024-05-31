/*
 Problem Statement
    Arun wants to implement a function to check whether an integer n is an Armstrong number or not using a call-by-reference function.
    Assist him in completing the program.
    An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits.
    Function Specifications: void checkArmstrong(int *n)

 Note: This question was asked in companies like Gemini Solution,TCS, Infosys, and Unthinkable Solutions.

 Input format :
    The input consists of an integer n.

 Output format :
    If n is an Armstrong number, the output prints "Armstrong number".
    If n is not an Armstrong number, the output prints "Not an Armstrong number".
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int checkArmstrong(int *number) {
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = *number;
    while (originalNumber != 0){
        originalNumber /= 10;
        ++n;
    }
    originalNumber = *number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    if (result == *number) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int number;
    scanf("%d",&number);
    if (checkArmstrong(&number)) {
        printf("Armstrong number");
    } else {
        printf("Not an armstrong number");
    }
    return 0;
}
// Created on 31-05-2024.

