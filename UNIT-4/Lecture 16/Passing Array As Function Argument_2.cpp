/*
 Problem statement
    Theo, an aspiring mathematician, has presented you with a challenge.
    He wants you to create a program that calculates the absolute difference between the sum of two arrays.
    Create a program to find the absolute difference between two arrays with a function named
    calculateArraySum and calculateAbsoluteDifference where the array is passed as an argument.

 Input
    10
    -100 -49 -87 5 6 7 0 100 37 57
    10
    -100 -75 -48 -86 -98 98 97 98 67 100
 Output
    77
 Explanation
    Two arrays with 10 elements each are given as input.
    The first array has elements: -100, -49, -87, 5, 6, 7, 0, 100, 37, 57, and the sum of the first array is - 24.
    The second array has elements: -100, -75, -48, -86, -98, 98, 97, 98, 67, 100, and the sum of the second array is 53.
    The absolute difference of the sum is calculated by subtracting the second array from first array |-24 - 53| = 77, and the result is printed.

 Input format :
    The first line of input is an integer value 'N1', representing the number of elements in the first array.
    The second line of input consists of N1 space-separated integers arr1[i], representing the elements of the first array.
    The third line of input is an integer value 'N2', representing the number of elements in the second array.
    The fourth line of input consists of N2 space-separated integers arr2[i], representing the elements of the second array.
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

void absdiff(int s1,int s2){
    int diff = s1-s2;
    printf("%d",abs(diff));
}


int main(void){
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i = 0; i < n1 ; i++){
        scanf("%d ",&arr1[i]);
    }
    int sum1 = sum(arr1,n1);
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d ",&arr2[i]);
    }
    int sum2 = sum(arr2,n2);
    absdiff(sum1,sum2);
    return 0;
}
// Created on 31-05-2024.

