/*
 Problem Statement
    In a digital library system, each book is assigned a unique identification number for tracking and inventory purposes.
    Develop a C program that validates the integrity of these identification numbers using the product of their digits.
    For instance, if a book's identification number is 1234, t
    he program should calculate the product of these digits (1 * 2 * 3 * 4) and return the result.

 Note: This question helps in clearing technical coding tests for companies like Zoho.

 Input format :
    The input consists of a long long integer n, representing the unique identification number.

 Output format :
    The output prints the product of its digits as a long long integer.

 Refer to the sample output for formatting specifications.

 Code constraints :
    In this scenario, the given test cases fall under the following constraints:
    105 ≤ n ≤ 1011
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    long int num;
    long int id=1,rem;
    scanf("%ld",&num);
    while(num!=0){
        rem=num%10;
        id*=rem;
        num/=10;
    }
    printf("%ld",id);
    return 0;
}
// Created on 31-05-2024.

