/*
 Problem Statement
    Joe is conducting a weight comparison between User A and User B.
    He wants to write a program that takes two integer inputs representing their weights.
    He determines and prints if User A is lighter than User B and if User B is lighter than User A using Relational Operators.

 Input format :
    The input consists of two integers, representing the weights of User A and User B, in separate lines.

 Output format :
    The first line of output prints whether User A is lighter than User B: display 1 if User A is lighter, and 0 otherwise.
    The second line of output prints whether User B is lighter than User A: display 1 if User B is lighter, and 0 otherwise.
    If both weights are the same, print "0".

Refer to the sample output for the exact format.

 Code constraints :
    In this scenario, the test cases will fall under the following constraints:
    10 ≤ A, B ≤ 1000
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("User A is lighter: %d\n",a<b);
    printf("User B is lighter: %d",a>b);
}
// Created on 31-05-2024.
