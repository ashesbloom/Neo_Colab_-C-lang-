/*
 Problem Statement
    Microbiologist Samantha needs a quick way to study microbe populations.
    Create a program that takes the current microbe count, and figures out its natural logarithm using
    the log() function from the math.h library, and shows the result with two decimal places.
    This tool will help Samantha analyze microbial growth intricacies faster and more accurately.

 Input format :
    The input is a positive double-point value n, representing the current microbe count.

 Output format :
    The output prints the log of the given number as a double-point value, rounded off to two decimal places.
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int main(void){
    double n;
    scanf("%lf",&n);
    printf("%.2lf",log(n));

    return 0;
}
// Created on 31-05-2024.

