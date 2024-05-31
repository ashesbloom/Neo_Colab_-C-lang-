/*
 Problem Statement
    John's little brother is struggling with math. He decided to design a calculator with basic operations such as
    addition, subtraction, and multiplication.
    The calculator should receive two numbers and an operator from the user. It should operate according to the operator entered and display the result. Help him implement the calculator using the Switch statement.

 Input format :
    The first line consists of two space-separated integers num1 and num2.
    The second line consists of a character, representing the operator: + for addition, - for subtraction, * for multiplication

 Output format :
    The output displays an integer representing the result after the operation is performed.
    If the operator is invalid, the output displays "INVALID".

 Refer to the sample output for the formatting specifications.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n1,n2;
    char op[2];
    scanf("%d %d %s",&n1,&n2,op);
    switch(op[0]){
        case '+':
            printf("%d",n1+n2);
            break;
        case '-':
            printf("%d",n1-n2);
            break;
        case '*':
            printf("%d",n1*n2);
            break;
        default:
            printf("INVALID");
    }
    return 0;
}
// Created on 31-05-2024.

