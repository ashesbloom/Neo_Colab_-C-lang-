/*
 Problem Statement
    In a classroom, students provide their test scores one by one.
    Write a program that takes the number of students and their test scores as input,
    calculates the total score using a pointer, and prints the overall sum of the test scores.
    Use an array and a pointer to navigate through the scores efficiently.

 Input format :
    The first line of input consists of an integer N, representing the number of students.
    The second line consists of N space-separated integers, representing the scores of N students.

 Output format :
    The output prints an integer representing the sum of the scores of N students.
 */


#include <stdio.h>
//Clang-12.0.0
int main() {
    int N, i, sum = 0;

    scanf("%d", &N);

    int scores[N];
    int *ptr = scores;


    for(i = 0; i < N; i++) {
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;
    }

    printf(" %d\n", sum);

    return 0;
}

// Created on 31-05-2024.