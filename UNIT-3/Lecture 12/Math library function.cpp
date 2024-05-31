/*
 Problem Statement
    Eden is tasked with writing a program to help her calculate the sum of a series using the Taylor series expansion.
    Help her write a program that takes inputs for the base value x and the number of terms n, then outputs the result.
    The Taylor series is given by: ex = 1 + x/1! + x2/2! + ... + xn/n! where the power values are calculated using the pow() function.

Example
    If x=4 and n=3, the calculation is given by:
     e4 = 1 + 4/1! + 42/2! + 43/3!
        = 1 + 4 + 8 + 10.6666
        = 23.6666 which rounds off to 23.67.
 Input format :
    The input consists of two space-separated integers x and n, representing the base value and the number of terms in the series, respectively.

 Output format :
    The output prints a double value, representing the sum of the series, rounded off to two decimal places.

 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    double result = 0.0;
    for(int i = 1; i<=y;i++){
        double temp = 0;
        temp = pow(x,i)/factorial(i);
        result+=temp;
    }
    result += 1;
    printf("%.2lf",result);

    return 0;
}
// Created on 31-05-2024.

