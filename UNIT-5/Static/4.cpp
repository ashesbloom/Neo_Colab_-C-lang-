/*
Problem Statement
    Develop a program that helps a user find and print the first N even numbers.
    The program should take the user's input for N and use a function named printEvenElements with
    a pointer to accomplish this task, displaying the sequence of even numbers as output.
 Note: This question helps in clearing technical coding tests of service-based companies.

Input format :
    The input consists of an integer N.

Output format :
    The output prints N even numbers, starting from 2.
 */


#include <stdio.h>
//Clang-12.0.0
void printEvenElements(int *N) {
    for (int i = 1; i <= *N; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");
}

int main() {
    int N;

    scanf("%d", &N);

    printEvenElements(&N);

    return 0;
}

// Created on 31-05-2024.

