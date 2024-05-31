/*
 Problem Statement
    Shalini wants you to create a program that calculates the average of even numbers in an array.
    The program should input the size of the array and then the array elements.
    Using pointers, calculate the average of only the even elements and print the result with one decimal point precision.

 Input format :
    The first line of input consists of an integer N, representing the array size.
    The second line consists of N space-separated integers, representing the array elements.

 Output format :
    The output prints a double value, representing the average of the even elements, rounded off to one decimal place.
 */

#include <stdio.h>
//Clang-12.0.0
void calculateAverage(int* arr, int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            sum += *(arr + i);
            count++;
        }
    }
    double average = (double)sum / count;
    if(average>0.0){
        printf("%.1f\n", average);
    }else{
        printf("0.0");
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateAverage(arr, n);

    return 0;
}

//Created on 31-05-2024