/*
 Problem Statement
    Mugil has been assigned a task to develop a versatile distance converter for navigation systems.
    The program is designed to enable users to input distances in kilometers and convert them into miles with two decimal places.

 Note: 1 km = 0.621371 miles

 Input format :
    The input consists of a integer value n, representing the distance in kilometers.

 Output format :
    The output prints the distance in miles as a double value with two decimal places.

 Refer to the sample output for formatting specifications.

 Code constraints :
    In this scenario, the given test cases fall under the following constraints:
    1 ≤ n ≤ 100
 */


#include<stdio.h>
//Clang-12.0.0
int main(void){
    int km;
    float mile = 0.621371;
    scanf("%d",&km);
    float result  = km*mile;
    printf("%.2f",result);
    return 0;
}
// Created on 31-05-2024.

