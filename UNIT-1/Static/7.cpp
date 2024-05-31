/*
 Problem Statement
    Raja needs a program to swap values using only assignment operators.
    Write a program that takes two floating-point numbers a and b as input. Swap the values using only assignment operators and display them before and after the swap.
    Can you assist Raja in checking the correctness of his swapping program?

 Input format :
    The first line consists of a float value a, representing the first number.
    The second line consists of a float value b, representing the second number.
 Output format :
    The first line displays "Before swapping: " followed by the values before swapping, separated by a space with two decimal places.
    The second line displays "After swapping: " followed by the values after swapping, separated by a space with two decimal places.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    1.0 ≤ a, b ≤ 100.0
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    float a,b,c;
    scanf("%f\n%f",&a,&b);
    printf("Before swapping: %.2f %.2f\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: %.2f %.2f",a,b);
    return 0;
}
//Created on 31-05-2024.