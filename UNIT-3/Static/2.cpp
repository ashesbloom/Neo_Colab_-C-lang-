/*
 Problem Statement
    Help Alex, a new programmer, create a straightforward program. Ask for a positive number, use a function named isDuckNumber()
    to check if it's a duck number (having at least one zero, not as the first digit), and print the result in the main function.
    This tool aids Alex in spotting duck numbers, enhancing their programming journey.
    Note: This question helps in clearing technical coding tests for companies like Amazon and Adobe.

 Input format :
    The input consists of an integer n, representing the number to be checked.

 Output format :
    The output prints "The number is a duck number." if the entered number is a duck number or "The number is NOT a duck number." otherwise.
 */

#include<stdio.h>
//Clang-12.0.0
int isDuckNumber(int n){
    while(n>0){
        int r = n%10;
        if(r==0){
            return 1;
        }
        n/=10;
    }
    return 0;
}

int main(void){
    int n;
    scanf("%d",&n);
    if(isDuckNumber(n)){
        printf("The number is a duck number.");
    }else{
        printf("The number is not a duck number.");
    }

    return 0;
}
// Created on 31-05-2024.

