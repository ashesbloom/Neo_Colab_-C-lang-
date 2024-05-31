/*
 Problem Statement
    Emma, an enthusiastic learner fascinated by mathematical operations,
    wants to create a simple program using "if" statements.
    The program should calculate the product of two integers, and then check whether the product is greater than 100, displaying an appropriate message based on the result.

 Input format :
    The input consists of two space-separated integers, x, and y, representing the values of Emma's two chosen integers.

 Output format :
    The output consists of the following sentences, based on the condition:
    If the product is greater than 100, the output displays "The product is greater than 100".
    If the product is not greater than 100, the output displays "The product is not greater than 100".

Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, test cases fall under the following constraints:
    0 ≤ x and y ≤ 100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int a,b,pro;
    scanf("%d %d",&a,&b);
    pro = a*b;
    (pro<100)?printf("The product is not greater than 100"):printf("The product is greater than 100");

    return 0;
}
// Created on 31-05-2024.

