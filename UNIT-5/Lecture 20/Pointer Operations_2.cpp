/*
 Problem Statement
    Mary recently attended a delightful party where a scrumptious cake was served.
    Being a cake enthusiast, she couldn't resist indulging in her favourite treat.
    Help Mary calculate the amount of cake she ate based on the initial weight of the cake and the fraction she consumed.
    Develop the program using pointers.

 Input format :
    The first line of input consists of a double value N, representing the initial weight of the cake.
    The second line consists of a double value M, representing the fraction of the cake Mary consumed.

 Output format :
    The output prints a double value, representing the amount of cake Mary ate in kilograms, rounded off to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
int main() {
    double cake_weight, consumption_fraction, amount_eaten;

    scanf("%lf", &cake_weight);

    scanf("%lf", &consumption_fraction);

    amount_eaten = cake_weight * consumption_fraction;

    printf("Mary ate %.2lf kg of the cake.\n", amount_eaten);

    return 0;
}
// Created on 31-05-2024.
