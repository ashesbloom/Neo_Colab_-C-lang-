/*
 Problem Statement
    Ella is developing a numeric comparison program in C that compares two numbers with different datatypes (e.g., int and long).
    Write a program that converts the integer to a long integer, compares the two numbers,
    and prints whether the first number is equal to, less than, or greater than the second number.

 Input format :
    The first line of input consists of an integer value 'n', representing the first number.
    The second line of input consists of a long integer value 'l', representing the second number.

 Output format :
    The output displays one of the following statements:
    If n is equal to l, it prints: "n and l are equal."
    If n is less than l, it prints: "n is less than l."
    If n is greater than l, it prints: "n is greater than l."
    Here n and l represent the first and second numbers respectively.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
        -2147483647 ≤ n ≤ 2147483647
        -109 ≤ l ≤ 109
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    long int l;
    scanf("%ld",&l);
    (long)n;
    if(n==l){
        printf("%ld and %ld are equal.",n,l);
    }else if(n<l){
        printf("%ld is less than %ld.",n,l);
    }else{
        printf("%ld is greater than %ld.",n,l);
    }

    return 0;
}
// Created on 31-05-2024.

