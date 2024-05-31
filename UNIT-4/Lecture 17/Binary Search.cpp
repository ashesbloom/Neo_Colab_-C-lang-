/*
 Problem Statement
    Sharon is working on a sorted array of integers and wants to determine the count of elements that are less than or equal to a specific key.
    As her supportive programmer, you are tasked with creating a program to assist Sharon in counting
    the number of elements that meet this criterion (less than or equal to the given key) using the binary search technique.

 Input format :
    The first line of input consists of an integer N, representing the size of the array.\
    The second line consists of N space-separated integers, the elements of the array.
    The third line consists of an integer key, the value to search for in the array.

 Output format :
    The output prints a single integer, representing the count of elements that are less than or equal to the given key.
 */

#include<stdio.h>
//Clang-12.0.0
int linear(int *arr,int n,int t){
    int result = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=t){
            result++;
        }
    }
    return result;
}

int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    printf("%d",linear(a,n,t));
    return 0;
}
// Created on 31-05-2024.

