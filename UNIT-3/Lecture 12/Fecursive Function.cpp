/*
 Problem Statement
    Erin, a mathematician wants to calculate the sum of squares of the first n Triangular numbers.
    Write a recursive function called TotalSumOfSquares to help
    Erin that takes the input for n and outputs the sum of squares of the first n Triangular numbers.
    The formula to calculate the nth Triangular number is Tn = (n * (n+1)) / 2.
 Example
    If n=4, the calculations are as follows:
    T1 = (1 * (1+1)) / 2 = 1
    T2 = (2* (2+1)) / 2 = 3
    T3 = (3 * (3+1)) / 2 = 6
    T4 = (4 * (4+1)) / 2 = 5
    So the sum of squares of first 4 triangular numbers = 12 + 32 + 62 + 52 = 1 + 9 + 36 + 100 = 146

 Input format :
    The input consists of an integer n, representing the number of triangular numbers to consider.

 Output format :
    The output prints an integer representing the sum of squares of the first n Triangular numbers.

 */

#include<stdio.h>
//Clang-12.0.0
int trinumber(int n){
    return ((n*(n+1))/2);
}

int TotalSumOfSquares(int n){
    if(n==1){
        return trinumber(1)*trinumber(1);
    }else{
        return trinumber(n)*trinumber(n)+TotalSumOfSquares(n-1);
    }
}

int main(void){
    int x;
    scanf("%d",&x);
    printf("%d",TotalSumOfSquares(x));
    return 0;
}
// Created on 31-05-2024.

