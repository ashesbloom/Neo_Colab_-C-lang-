/*
 Problem Statement
    Arun is developing a program that demonstrates the use of a constant pointer to a constant integer (const int *).
    He should take an integer input from the user, use a constant pointer to store its address,
    and then print both the original value of the integer and the value accessed through the constant pointer.
    Guide Arun to accomplish the task.

 Input format :
    The input consists of an integer.

 Output format :
    The first line of output prints "Original value of number: ", followed by the input integer.
    The second line prints "Value accessed through const pointer: ", followed by the value accessed through the pointer.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int const *ptr = &n;
    printf("Original value of number: %d\n",n);
    printf("Value accessed through const pointer: %d",*ptr);
    return 0;
}
// Created on 31-05-2024.

