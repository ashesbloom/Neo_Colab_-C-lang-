/*
 Problem Statement
    Steve is interested in Fibonacci numbers. Help him write a program that identifies and displays the
    Fibonacci numbers present in the array using dynamic memory allocation, assuming that at least one Fibonacci number is present in the array.

 Note: Use malloc() for memory allocation.

 Input format :
    The first line of input consists of an integer N, representing the size of the array.
    The second line consists of N space-separated integers, representing the elements of the array.

 Output format :
    The output displays the Fibonacci numbers present in the array, separated by a space.
 */

#include <stdio.h>
#include <stdlib.h>
//Clang-12.0.0

// Function to check if a number is a Fibonacci number
int isFibonacci(int num) {
    int a = 0, b = 1, c;
    while (b <= num) {
        if (b == num) {
            return 1; // Found a Fibonacci number
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0; // Not a Fibonacci number
}

int main() {
    int N;

    scanf("%d", &N);

    int *arr = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (isFibonacci(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr); // Free dynamically allocated memory

    return 0;
}

// Created on 31-05-2024.

