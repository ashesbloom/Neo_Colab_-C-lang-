/*
 Problem Statement

    A farmer wants to assess the average yields of two different crops from their last two harvests.
    Design a program that takes the yield (in kilograms) for each crop from the two harvests as input.
    Calculate the average yield of each crop and also determine print which crop had the highest average yield using
    the conditional (ternary) operator.

 Input format :
    The first line consists of two space-separated double values m1 and n1, representing the yields for Crop 1 (in kilograms) for Harvest 1 and Harvest 2, respectively.
    The second line consists of two space-separated double values m2 and n2, representing the yields for Crop 2 (in kilograms) for Harvest 1 and Harvest 2, respectively.

 Output format :
    The first line prints "Crop 1: X kg" where X is a double value representing the average yield of Crop 1 in both harvests rounded to two decimal places.
    The second line prints "Crop 2: Y kg" where X is a double value representing the average yield of Crop 2 in both harvests rounded to two decimal places.
    The third line prints "Crop Z had the highest average yield" where Z is the crop number that had the highest yield.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, test cases fall under the following constraints:
    100.0 ≤ m1, n1, m2, n2 ≤ 1000.0
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    float c1,c2,c3,c4;
    scanf("%f %f\n%f %f",&c1,&c2,&c3,&c4);
    double crop1 = (c1+c2)/2;
    double crop2 = (c3+c4)/2;
    printf("Crop 1: %.2lf kg\n",crop1);
    printf("Crop 2: %.2lf kg\n",crop2);
    (crop1>crop2)?printf("Crop 1 had the highest average yield"):printf("Crop 2 had the highest average yield");
    return 0;
}
// Created on 31-05-2024.
