/*
 Problem Statement
    Brian is an enthusiastic learner diving into the world of programming!
    Brian is experimenting with unary operators and wants to understand their impact on a given variable.
    Can you help him by writing a program that takes an integer as input,
    performs a series of unary operations a = ++a * --a, and then displays the final value?

 Input format :
    The input consists of an integer a.

 Output format :
    The output displays the final value of a after performing the given unary operations.
*/

#include<stdio.h>
//Clang-12.0.0
int main(){
    int a;
    scanf("%d",&a);
    int result = (++a)*(--a); // Evaluating the expression (++a) * (--a)
    printf("%d",result);
}

// Created on 21-04-2024.
