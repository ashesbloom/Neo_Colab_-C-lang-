/*
 Problem Statement
    Arun started writing a program that reads a short integer input, stores its address in a void pointer,
    and attempts to print the value in a double datatype using type casting. However, he could not finish the program,
    and your task is to complete it.

 Input format :
    The input consists of a short integer N.

 Output format :
    The output prints the given integer as a double value with two decimal places.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    void *r = &n;
    printf("%.2f",(float)n);
    return 0;
}
// Created on 31-05-2024.

