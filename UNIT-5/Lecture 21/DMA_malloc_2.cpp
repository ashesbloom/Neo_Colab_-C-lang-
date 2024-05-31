/*
 Problem Statement
    Arjun wants to write a program that takes an integer size as input, allocates memory for two integer arrays of the same size,
    and reads integers into both arrays.
    Multiply the corresponding elements of both arrays, store the results in a new array,
    and finally print the elements of the final array. Help Arjun to achieve this ensuring memory is allocated using malloc for the arrays.

 Input format :
    The first line of input consists of an integer N, representing the size of the array.
    The second line consists of N space-separated integers, representing the elements of the first array.
    The third line consists of N space-separated integers, representing the elements of the second array.

 Output format :
    The output prints N space-separated integers, representing the result array obtained by multiplying corresponding elements of the first and second array.
 */

#include<stdio.h>
#include<stdlib.h>
//Clang-12.0.0
int product(int a,int b){
    return a*b;
}

int main(void){
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    int* arr2 = (int*)malloc(n*sizeof(int));
    int* result = (int*)malloc(n*sizeof(int));

    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i= 0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        result[i] = product(arr[i],arr2[i]);
    }
    for(int i = 0;i<n;i++){
        printf("%d ",result[i]);
    }
    return 0;
}

// Created on 31-05-2024.

