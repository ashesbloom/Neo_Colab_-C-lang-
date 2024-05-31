/*
 Problem Statement

    Joice is eager to create a program to compute the water tax using the ternary operator.
    The program should take the consumed water units as input and apply the following rates:
    The water tax slab is as follows:
    If units are <100, then the cost is Rs.1 per unit.
    If 100>=units<=500, then the cost is Rs.1.5 per unit
    If units are> 500, then the cost is Rs.3 per unit.
    Display the calculated water charges.

 Input format :
    The input consists of a double value w, representing the volume of water consumed.

 Output format :
    The output displays a floating-point number representing the water tax for the consumed volume of water, rounded off to two decimal places.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, the test cases fall under the following constraints:
    50.0 ≤ w ≤ 1000.0
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    double w;
    scanf("%lf",&w);
    double result = (w<100)?w*1.0:(w>=100 && w<=500)?w*1.5:w*3.0;
    printf("%.2lf",result);
}
// Created on 31-05-2024.

