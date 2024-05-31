/*
 Problem Statement
    Riya is developing a program that manages two arrays.
    She inputs the size and elements for both arrays by allocating memory using malloc(), then resizes them such that,
    only the odd numbers are stored in the first array and only the even numbers are stored in the second array.
    Finally, Riya prints the modified arrays with the respective odd and even elements. Use realloc() for resizing the array sizes.

 Input format :
    The first line of input consists of an integer N, representing the size of both arrays.
    The second line consists of N space-separated integers, representing the elements of the first array.
    The third line consists of N space-separated integers, representing the elements of the second array.

 Output format :
    The first line of output displays only the odd numbers of the first array after resizing, separated by a space.
    The second line displays only the even numbers of the second array after resizing, separated by a space.
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
    int *r = (int *)realloc(arr1,N*sizeof(int));

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

    // Resize the arrays and print the odd and even numbers
    for (int i = 0; i < N; i++) {
        if (arr1[i] % 2 != 0) {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        if (arr2[i] % 2 == 0) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}

// Created on 31-05-2024.

