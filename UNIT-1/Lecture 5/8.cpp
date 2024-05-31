/*
 Problem statement
    Sophie is an eco-conscious driver who calculates the total cost of her trip based on the distance traveled.
    If the distance is less than or equal to 200 km, the cost per kilometer is 0.40 rupees. For distances between 200 km and 500 km,
    the cost is 0.35 rupees per kilometer. Beyond 500 km, the cost reduces to 0.30 rupees per kilometer.
    Write a program that takes the distance as input and outputs the estimated total cost. Additionally,
    Sophie receives a 5% discount on the total cost. The program should utilize relational, ternary, and
    assignment operators to calculate the final cost.

 Formula:
    total-cost = distance * costPerMile

 Input format :
    The input consists of a double value 'd', representing the distance traveled.

 Output format :
    The output displays a double value representing the total cost after applying discounts.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    100.0 ≤ d ≤ 600.0
*/

#include<stdio.h>
//Clang-12.0.0
int main(void){
    double dis;
    scanf("%lf",&dis);
    double result = (dis<=200)?dis*0.40:(dis<=500)?dis*0.35:dis*0.30;
    double d = result*0.05;
    result -= d;
    printf("%.2lf",result);
}
// Created on 31-05-2024.

