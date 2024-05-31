/*
 Problem Statement
    Imagine you are tasked with creating a program that calculates the cube of a given number.
    Your goal is to write a program that takes an integer n from the user,
    calculates its cube using a call-by-reference function, and then prints the result.

 Function Specifications: int cube(int *n)

 Input format :
    The input consists of a positive integer n.

 Output format :
    The output prints an integer which is the cube value of n.
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0

int cube(int *x){
    *x = pow(*x , 3);
    return *x;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",cube(&n));
    return 0;
}
// Created on 31-05-2024.

