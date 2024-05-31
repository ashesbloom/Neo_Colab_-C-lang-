/*
 Problem Statement
    Harsh is a city planner who is tasked with predicting the population growth of his city over the next few years.
    He wants to create a program to predict the future population based on the initial population, growth rate, and time.
    Assist Harsh in completing his task using pointers and a function Growth to find the growth rate.

 Formula: Predicted population = initial population * e growth rate * time

 Input format :
    The first line of input consists of a double value N, representing the initial population of the city.
    The second line consists of a double value M, representing the growth rate of the city.
    The third line consists of a double value T, representing the time (in years).

 Output format :
    The output prints a double value, representing the predicted population, rounded off to two decimal places.
 */

#include <stdio.h>
#include <math.h>
//Clang-12.0.0
double Growth(double *initialPopulation, double *growthRate, double *time) {
    return *initialPopulation * exp(*growthRate * *time);
}

int main() {
    double N, M, T;
    scanf("%lf %lf %lf", &N, &M, &T);

    double predictedPopulation = Growth(&N, &M, &T);

    printf("%.2lf\n", predictedPopulation);

    return 0;
}
// Created on 31-05-2024.