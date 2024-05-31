/*
 Problem Statement
    Helen is developing a program that analyzes numerical inputs.
    The program categorizes each input based on its value: a positive number elicits a specific message,
    a negative number prompts a different response, and inputting zero generates a unique message.
    Create a program that identifies the type of a number inputted.
    Ensure the program exits using a return statement after identifying the type of the number.

 Input format :
    The input consists of a single integer, N, which represents the number.

 Output format :
    The output displays one of the following:
    If the given number is positive, then display the statement "The number is positive."
    If the given number is negative, then display the statement "The number is negative."
    If the given number is zero, then display the statement "The number is zero."

 Refer to the sample output for the formatting specifications.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    if (n==0){
        printf("The number is zero.");
    }
    if(n>0){
        printf("The number is positive.");
    }else if(n<0){
        printf("The number is negative.");
    }
    return 0;
}
// Created on 31-05-2024.
