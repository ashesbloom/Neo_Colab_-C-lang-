/*
 Problem Statement
    Emily is a budding programmer who loves solving mathematical problems.
    One day, she comes across a challenge to find the largest of three numbers using a custom function.
    Determined to tackle the challenge, she decided to create a program. Can you help her write the code and solve the problem?
    Function Specifications: double findMax(double a, double b, double c)

 Input format :
    The input consists of three space-separated double values a, b, and c.

 Output format :
    The output prints a double value which is the largest number of the given three numbers, rounded off to two decimal places.
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
double findMax(double a,double b,double c){
    return fmax(a,fmax(b,c));
}

int main(void){
    double n,n1,n2;
    scanf("%lf %lf %lf",&n,&n1,&n2);
    double max = findMax(n,n1,n2);
    printf("%.2lf",max);
    return 0;
}
// Created on 31-05-2024.

