/*
Problem Statement
    Create a program that takes an integer N as input, creates an array of N integers, accepts N values into the array,
    and prints the values at odd positions (that is the values at position 1, 3, 5 and so on) using pointers.

 Note: This question helps in clearing the conceptual interviews of service-based companies.

 Input format :
    The first line of input consists of an integer N, representing the number of array elements.
    The second line consists of N space-separated integers, representing the array elements.

 Output format :
    The output prints N integers representing the values at odd positions.
 */

#include <stdio.h>
//Clang-12.0.0
void printOddPositions(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printOddPositions(arr, N);

    return 0;
}

// Created on 31-05-2024.

