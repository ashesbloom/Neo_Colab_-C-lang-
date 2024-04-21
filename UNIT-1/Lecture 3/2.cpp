/*
 Problem Statement
    Aspiring engineer Alex is developing a versatile distance conversion program to help users convert distances from
    kilometres to meters and centimetres.
    He wants to create a user-friendly tool that can quickly provide conversions for different units of measurement.
    Write a program that takes distance in kilometres as input and converts it into meters and centimetres using arithmetic operators, t
    hen display the results.

 Input format :
    The input consists of a floating-point number, representing the distance in kilometres to be converted.

 Output format :
    The first line displays "Meter: " followed by a floating-point value, representing the converted distance in meters,
    rounded off to two decimal places.
    The second line displays "Centimeter: " followed by a floating-point value, representing the converted distance in
    centimetres, rounded off to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
double calculate(double n){
    printf("Meter: %.2lf\n",n*1000.0);
    printf("Centimeter: %.2lf",n*100000.0);
}

int main(void){
    double n;
    scanf("%lf",&n);
    calculate(n); // Function call to calculate the distance in meters and centimeters.
}


// Created on 21-04-2024.

