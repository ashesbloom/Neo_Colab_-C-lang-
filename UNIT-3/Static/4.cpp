/*
 Problem Statement
    Imagine you are working on a financial application where users input various transaction amounts.
    As part of a data analysis feature, you need to implement a function countZeros(int n) to count the occurrences of zeros in the transaction amounts.
    Write a program that uses recursion to achieve this.

 Input format :
    The input consists of an integer n, representing the transaction amount.

 Output format :
    The output prints the count of zero digits in the entered transaction amount.
 */

#include<stdio.h>
//Clang-12.0.0
int countZeros(int n){
    int count = 0;
    while(n>0){
        int r = n%10;
        if(r==0){
            count++;
        }
        n/=10;
    }
    return count;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",countZeros(n));
}
// Created on 31-05-2024.

