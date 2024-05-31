/*
 Problem Statement:
    Teju considers the number 3 unlucky and wishes to remove the element located at the 3rd position in an array,
    considering the first position in the array as position 1.
    Write a program that eliminates the element at this 3rd position and then displays the modified array.

 Input format :
    The first line of input is an integer 'n', the size of the array.
    The second line of input consists of 'n' space-separated integers representing the elements of the array.

 Output format :
    The output displays space-separated integer array values after removing the element at the 3rd position.
 */

#include<stdio.h>
//Clang-12.0.0
void display(int arr[100],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    for(int i=2;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    display(arr,n);
    return 0;
}
// Created on 31-05-2024.

