/*
 Problem Statement
    Merlin is working on a calendar application that requires a leap-year verification feature for accurate event scheduling.
    Users input a year, and her program determines whether it's a leap year or not, aiding in precise calendar calculations.
    Help her write a program to determine if the given year is a leap year or not by using only switch statements and operators.

    Note: This question was asked in TCS coding test.

 Input format :
    The input consists of an integer representing the year.

 Output format :
    If the given year is a leap year, the output prints "<<Input year>> is a leap year."
    Otherwise, the output prints "<<Input year>> is not a leap year."

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    1900 ≤ Input year ≤ 2100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int year;
    scanf("%d",&year);
    int x = ((year%4==0) && (year%100!=0)) || (year%400==0);
    switch (x){
        case 1:
            printf("%d is a leap year.",year);
            break;
        case 0:
            printf("%d is not a leap year.",year);
            break;
    }
    return 0;
}
// Created on 31-05-2024.

