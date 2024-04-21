/*
 Problem Statement
    Philip is given the following expression: (++n) * (--m).
    Design a program for Philip that takes initial values for variables m and n, evaluates the expression, and prints the result.
    Ensure that the program handles pre-increment (++n) and pre-decrement (--m) operations correctly.

 Input format :
    The input consists of two space-separated integers representing the values of m and n.

 Output format :
    The output displays an integer representing the result of the given expression.
*/

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n,m;
    scanf("%d %d",&m,&n);
    int result = (++n)*(--m); // Evaluating the expression (++n) * (--m)
    printf("%d",result);
}

// Created on 21-04-2024.
