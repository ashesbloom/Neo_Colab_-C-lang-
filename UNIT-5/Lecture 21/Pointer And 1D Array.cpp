/*
 Problem Statement
    You are given an integer array of N elements. Find out the sum of the first N/2 elements and the sum of the last N/2 elements using pointers.

 Example

 Input:
    10
    2 2 2 2 2 3 3 3 3 3
 Output:
    10
    15
 Explanation:
    N = 10 -> N/2 = 5
    sum of the first 5 elements = 2+2+2+2+2 = 10
    sum of the last 5 elements = 3+3+3+3+3 = 15

 Note: This question helps in clearing conceptual interviews of service-based companies.

 Input format :
    The first line of input consists of an integer N, representing the number of array elements.
    The second line consists of N space-separated integers, representing the array of elements.

 Output format :
    The first line of output prints the sum of the first N/2 elements of the given array.
    The second line prints the sum of the last N/2 elements of the given array.
 */

#include<stdio.h>
#include<stdlib.h>
//Clang-12.0.0
int sumfirst(int *arr, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int sumlast(int *arr, int n,int l){
    int sum = 0;
    for(int i=l-1;i>=n;i--){
        sum+=arr[i];
    }
    return sum;
}


int main(void){
    int n;
    scanf("%d",&n);
    int* ptr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int h = n/2;
    printf("%d\n",sumfirst(ptr,h));
    printf("%d",sumlast(ptr,h,n));
    return 0;
}
// Created on 31-05-2024.

