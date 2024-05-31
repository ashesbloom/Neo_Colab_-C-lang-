/*
 Problem Statement
    Kritik is developing a program to combine two arrays into one by reallocating memory for the first array to double its size
    and allocating memory for the second array.
    Utilizing malloc for initial memory allocation and realloc for resizing, Kritik aims to efficiently handle arrays of integers.

 Input format :
    The first line contains an integer N, representing the size of both arrays.
    The second line contains N space-separated integers, representing the elements of the first array.
    The third line contains N space-separated integers, representing the elements of the second array.

 Output format :
    The output displays the combined array containing elements from both arrays,
    after reallocating memory for the first array to double its size and appending the elements of the second array.
 */


#include <stdio.h>
#include <stdlib.h>
//Clang-12.0.0
int main() {
    int N;
    scanf("%d", &N);

    // Allocate memory for the arrays
    int *arr1 = (int *)malloc(N * sizeof(int));
    int *arr2 = (int *)malloc(N * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    // Reallocate memory for the first array to double its size
    arr1 = (int *)realloc(arr1, 2 * N * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        free(arr2); // Free previously allocated memory
        return 1;
    }

    // Append the elements of the second array to the first array
    for (int i = 0; i < N; i++) {
        arr1[N + i] = arr2[i];
    }

    // Print the combined array
    for (int i = 0; i < 2 * N; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}

// Created on 31-05-2024.

