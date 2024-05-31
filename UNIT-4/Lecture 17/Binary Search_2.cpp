/*
 Problem Statement
    Arun is tasked with developing a binary search algorithm to efficiently locate the index of the
    first occurrence of a number divisible by 3 in a given sorted array of integers.
    Write a program to help Arun navigate the array elements and locate the required index.
    If a number divisible by 3 is found, return its index; otherwise, gracefully handle the absence of such a number.

 Input format :
    The first line consists of an integer n, representing the size of the array.
    The second line consists of n space-separated integers representing the elements of the sorted array.

 Output format :
    The output prints "Index of the first occurrence: " followed by the index of the first occurrence of a number divisible by 3.
    If no such number exists, print "No numbers divisible by 3."
 */

#include<stdio.h>
//Clang-12.0.0
int find(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]%3==0){
            return i;
        }
    }
    return -1;
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&arr[i]);
    }

    int result = find(arr,n);
    if(result!=-1){
        printf("Index of the first occurrence: %d",result);
    }else{
        printf("No numbers divisible by 3.");
    }

    return 0;
}
// Created on 31-05-2024.

