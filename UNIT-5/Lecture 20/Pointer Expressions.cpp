/*
 Problem Statement
    Mark wants to calculate his monthly savings based on his salary and a specified savings percentage.
    Write a program to help Mark that input the monthly salary and the percentage of the salary to save.
    Use pointers to calculate the amount to save. Display the calculated amount with two decimal places.

 Input format :
    The first line of input consists of a floating-point value, representing the monthly salary.
    The second line consists of a floating-point value, representing the savings percentage.

 Output format :
    The output prints a floating-point value, representing the calculated savings amount, rounded off to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
int main(){
    float salary;
    scanf("%f", &salary);
    float percent;
    scanf("%f",&percent);
    float result = (salary/100.00)*percent;
    float *saving = &result;
    printf("%.2f",*saving);
}
//Created on 31-05-2024