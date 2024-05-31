/*
 Problem statement
    Joseph is working on a program to reverse an array. He needs your help to complete the task.
    Write a  program that takes an array, reverses its elements, and outputs the reversed array.

 Function Specifications:
    void reverseArray(int arr[], int size): Reverses the elements of the given array.

 Input format :
    The first line of input is an integer value 'N', representing the number of elements in the array.
    The second line of input consists of N space-separated integers arr[i], representing the elements of the array.

 Output format :
    The output displays a reversed array of integer elements, separated by a space.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Created on 31-05-2024.

