/*
 Problem Statement
    Nial is working on a health monitoring system and needs your assistance in creating a program using
    pointers to calculate the cardiac output based on heart rate and stroke volume.
    Write a program that inputs heart rate (in beats per minute) and stroke volume (in millilitres per minute) and
    calculates the cardiac output using the formula: heart rate * stroke volume.

 Note: Convert the cardiac output to liters per minute.

 Input format :
    The first line of input consists of a double value N, representing the heart rate in beats per minute.
    The second line consists of a double value M, representing the stroke volume in millilitres per minute.

 Output format :
    The output prints a double value, representing the calculated cardiac output in liters per minute, rounded off to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
double calculateCardiacOutput(double *heartRate, double *strokeVolume) {
    return (*heartRate * *strokeVolume) / 1000.0; // Convert milliliters to liters
}

int main() {
    double heartRate, strokeVolume;

    scanf("%lf", &heartRate);

    scanf("%lf", &strokeVolume);

    // Calculate cardiac output
    double cardiacOutput = calculateCardiacOutput(&heartRate, &strokeVolume);

    // Output cardiac output in liters per minute
    printf("%.2lf liters per minute\n", cardiacOutput);

    return 0;
}

// Created on 31-05-2024.
