/*
 Problem Statement
    Selva is curious about the sum of even Fibonacci numbers.
    He wants to write a program that calculates the sum of even Fibonacci numbers up to a given limit.
    Write a program that takes an integer N as input, representing the limit,
    and calculates the sum of even Fibonacci numbers from 0 to N (inclusive) using the call-by-reference function called evenFibSum.
    If the limit is less than 2, the result should be 0.

 Note: This question helps in clearing technical coding tests for companies like Accenture and Zoho.

 Input format :
    The input consists of an integer N, indicating the limit for calculating the sum of even Fibonacci numbers.

 Output format :
    The output displays an integer representing the sum of all the even Fibonacci numbers from 0 to N (inclusive).
 */

#include<stdio.h>
//Clang-12.0.0
int evenFibSum(int *limit){
    int sum = 0;
    int a=0,c=0,b=1;
    while(c<=*limit){
        if(c%2==0){
            sum += c;
        }
        c=a+b;
        b=a;
        a=c;
    }
    return sum;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",evenFibSum(&n));
    return 0;
}
// Created on 31-05-2024.

