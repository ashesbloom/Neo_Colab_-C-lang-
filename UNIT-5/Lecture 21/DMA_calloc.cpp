/*
 Problem Statement
    Seema, a statistician, is working on a program to calculate the average of numbers divisible by a given divisor.
    Implement a program using dynamic memory allocation to input an array of integers, filter the numbers based on divisibility, and output the average.

 Note: Use calloc() for memory allocation.
 For Example,
    Let's assume the numbers are {10, 13, 20} and the divisor is 5. The numbers divisible by 5 are 10 & 20,
    so the average of 10 & 20 is 15.0.

 Input format :
    The first line of input consists of an integer N, representing the size of the array.
    The second line consists of N space-separated integers, representing the elements of the array.
    The third line consists of an integer representing the divisor.

 Output format :
    If there are no numbers in the array divisible by the divisor, the output displays "None".
    Otherwise, the output displays a double value, representing the average of the divisible numbers of the array, rounded to one decimal place.
 */
#include <stdio.h>
#include <stdlib.h>
//Clang-12.0.0
int main() {
    int N, divisor, count = 0;
    double sum = 0.0;

    scanf("%d", &N);

    // Allocate memory for the array
    int *arr = (int *)calloc(N, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }


    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &divisor);

    // Calculate the sum of numbers divisible by the divisor
    for (int i = 0; i < N; i++) {
        if (arr[i] % divisor == 0) {
            sum += arr[i];
            count++;
        }
    }

    // Free dynamically allocated memory
    free(arr);

    // Print the average or "None" if no numbers are divisible by the divisor
    if (count > 0) {
        printf("%.1lf\n", sum / count);
    } else {
        printf("None\n");
    }

    return 0;
}
// Created on 31-05-2024.

