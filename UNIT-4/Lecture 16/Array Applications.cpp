/*
 Problem Statement
    Given an integer array sequence of size n, write a program to find the equilibrium index of the array.
    The equilibrium index of an array is an index such that the sum of elements at lower indexes
    is equal to the sum of elements at higher indexes.

 Example
 Input:
     7
    -7 1 5 2 -4 3 0
 Output:
    3
 Explanation:
    3 is an equilibrium index, because, A[0] + A[1] + A[2] = A[4] + A[5] + A[6].

 Note: This is a question asked in Amazon and Microsoft coding tests.

 Input format :
    The first line of input consists of an integer n, representing the size of the array.
    The second line consists of n space-separated integers, representing the array elements.

 Output format :
    The output prints an integer representing the equilibrium index of the given array.
    If there is no such index found, print "No equilibrium index found."
 */

#include<stdio.h>
//Clang-12.0.0
int find(int arr[100],int n){
    int ts=0,ls=0;
    for(int i=0;i<n;i++){
        ts+=arr[i];
    }

    for(int i=0;i<n;i++){
        ts -=arr[i];
        if(ls==ts){
            return i;
        }
        ls+=arr[i];
    }
    return -1;
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    int result = find(arr,n);
    if(result!=-1){
        printf("%d",result);
    }else{
        printf("No equilibrium index found.");
    }

    return 0;
}
// Created on 31-05-2024.

