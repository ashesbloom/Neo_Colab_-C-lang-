/*
 Problem Statement
    Aravind wants to develop a program for a survey application that captures user ratings for a restaurant as decimal values.
    The program should dynamically allocate memory using calloc(), round the ratings to the nearest integer, and print the modified ratings for analysis.
 For Example,
    If the rating is 2.6, the nearest integer is 3, so the modified rating is 3.
    If the rating is 3.5, the nearest integer is 4, so the modified rating is 4.
    If the rating is 1.3, the nearest integer is 1, so the modified rating is 1.
    Assist Aravind in creating the program.

 Input format :
    The first line consists of an integer N, representing the number of ratings.
    The second line consists of N space-separated float values, representing the decimal ratings.

 Output format :
    The output displays N space-separated values representing the modified ratings.
 */


// You are using GCC
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Clang-12.0.0
int main() {
    int N;
    scanf("%d", &N);

    // Allocate memory for the array
    float *ratings = (float *)calloc(N, sizeof(float));
    if (ratings == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%f", &ratings[i]);
    }

    // Round the ratings to the nearest integer and print them
    for (int i = 0; i < N; i++) {
        printf("%d ", (int)round(ratings[i]));
    }
    printf("\n");

    // Free dynamically allocated memory
    free(ratings);

    return 0;
}
// Created on 31-05-2024.

