/*
 Problem Statement
    Amil, a curious coder, has a distinctive approach to handling numerical input.
    Write a program to get an integer from the user.
    If the number is even, the system employs a goto statement to a label indicating an affirmative response. Otherwise,
    another goto statement conveys a negative response.

 Input format :
    The input consists of a single integer n.

 Output format :
    The output displays one of the following:
    If n is an even number, it displays "You entered an even number."
    If n is an odd number, it displays "You entered an odd number."

 Refer to the sample output for the formatting specifications.
*/

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        goto lable_even;
        lable_even:
        printf("You entered an even number.");
    }else{
        printf("You entered an odd number.");
    }
}
// Created on 31-05-2024.

