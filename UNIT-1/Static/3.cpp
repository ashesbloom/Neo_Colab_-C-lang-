/*
 Problem Statement

    Mike is working on a programming assignment related to bitwise operations.
    He wants to perform a bitwise OR operation on two given integer values. Write a program that takes two integers as input,
    performs a bitwise OR (|) operation, and displays the result.

 Input format :
    The input consists of two unsigned integers, ip1 and ip2, separated by spaces.

 Output format :
    The output displays the result of the bitwise OR operation of the two input values as an unsigned integer.

Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    100 ≤ ip1, ip2 ≤ 104
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    long int ip1,ip2;
    scanf("%ld %ld",&ip1,&ip2);
    int r= ip1|ip2;
    printf("%d",r);
    return 0;
}
// Created on 31-05-2024.

