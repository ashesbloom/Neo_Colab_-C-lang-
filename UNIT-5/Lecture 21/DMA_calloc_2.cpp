/*
 Problem Statement
    Farooq is working on a project where he needs to compare the corresponding elements of two arrays.
    He wants to find the maximum element from each pair and store them in a separate array.
    Write a program to assist Farooq in achieving this task. Allocate the memory of the arrays using calloc.

 Input format :
    The first line consists of an integer N, representing the denoting the size of the arrays.
    The second line consists of N space-separated integers, representing the elements of the first array.
    The third line consists of N space-separated integers, representing the elements of the second array.

 Output format :
    The output displays the maximum element from each pair on a single line, separated by a space.
 */

// You are using GCC
#include <stdio.h>
#include <stdlib.h>
//Clang-12.0.0

int main() {
    int N;
    scanf("%d", &N);

    // Allocate memory for the arrays
    int *arr1 = (int *)calloc(N, sizeof(int));
    int *arr2 = (int *)calloc(N, sizeof(int));
    int *max_arr = (int *)calloc(N, sizeof(int));

    if (arr1 == NULL || arr2 == NULL || max_arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find the maximum element from each pair and store in max_arr
    for (int i = 0; i < N; i++) {
        max_arr[i] = (arr1[i] > arr2[i]) ? arr1[i] : arr2[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", max_arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);
    free(max_arr);

    return 0;
}

// Created on 31-05-2024.

