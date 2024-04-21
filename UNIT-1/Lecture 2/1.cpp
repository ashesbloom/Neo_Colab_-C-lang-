/*
 Problem Statement
    Harshith is exploring the behaviour of floating-point arithmetic in C.
    Write a program that declares a float variable n with a value of 3.5.

 Use the printf function to display the following:
    The value of n.
    The result of adding 1 to n.
    The result of adding 2 to n.
    The result of adding 3 to n.
 Input format :
    No console input.

 Output format :
    The output displays the following in separate lines:

 The value of n.
    The result of adding 1 to n.
    The result of adding 2 to n.
    The result of adding 3 to n.
*/

#include <stdio.h>
//Clang-12.0.0
int main(){
    float MyFloatNum = 3.5; // Declaring a float variable n with a value of 3.5.
    
    printf("%f\n",MyFloatNum);
    printf("%f\n",MyFloatNum+1);
    printf("%f\n",MyFloatNum+2);
    printf("%f\n",MyFloatNum+3);
    
    return 0;
}

// Created on 21-04-2024.
