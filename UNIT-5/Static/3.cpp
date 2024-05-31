/*
 Problem Statement
    George is on an exciting boat adventure, navigating a river upstream and downstream.
    He needs your expertise to determine the speed of the boat in still water.
    Assist George by creating a program that utilizes pointers.

Input format :
    The first line of input consists of a double value N, representing the time George spent travelling upstream.
    The second line consists of a double value M, representing the time George spent travelling downstream.
    The third line consists of a double value S, representing the speed of the stream.

Output format :
    The output prints a double value, representing the speed of the boat in still water (in miles per hour),
    rounded off to two decimal places.

 */

#include <stdio.h>
//Clang-12.0.0
void calculateBoatSpeed(double *U, double *D, double *S, double *speed) {
    // Calculate the speed of the boat in still water
    *speed = *S * ( *U - *D)/(*U + *D);
}

int main() {
    double N, M, S, speed;

    scanf("%lf", &N);


    scanf("%lf", &M);

    scanf("%lf", &S);

    calculateBoatSpeed(&N, &M, &S, &speed);

    printf("%.2lf mph",speed);

    return 0;
}

// Created on 31-05-2024.

