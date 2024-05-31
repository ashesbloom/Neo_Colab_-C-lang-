/*
 Problem Statement
    Shadi needs a program to check for duplicates in an array. The program should prompt the user to input the size of the array followed by its elements.
    To ensure memory efficiency, the program dynamically allocates memory for the array and uses realloc for resizing.
    Then it determines whether any duplicates exist. If duplicates are found, it prints "Found"; otherwise, it prints "Not found".

 Input format :
    The first line consists of an integer n, representing the size of the array.
    The second line consists of n space-separated integers representing the elements of the array.

 Output format :
    The output displays a single line containing either "Found" if duplicates are present in the array, or "Not found" if no duplicates are present.

 */

#include <stdio.h>
#include <stdlib.h>
//Clang-12.0.0
int main() {
    int n;
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    int *r = (int *)realloc(arr,n*sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    // Print the result
    if (found) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
// Created on 31-05-2024.

