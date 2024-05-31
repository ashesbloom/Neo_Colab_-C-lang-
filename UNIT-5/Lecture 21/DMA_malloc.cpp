/*
 Problem Statement
    Sushant is given an array of integers representing a sequence. He wants to implement a program to transform the array according to the following rules:
    Replace the first element with the sum of itself and the second element.
    Replace other elements with the sum of the previous and the next elements.
    Replace the last element with the sum of itself and the previous element.
    Help him write the code to output the modified array using malloc().

 For Example,
    If the array elements are 10, 20, 30, 40, 50; the calculations are as follows:
    First element = 10+20 = 30
    Second element = 10+30 = 40
    Third element = 20+40 = 60
    Fourth element = 30+50 = 80
    Last element = 40+50 = 90
    Therefore, the final array is 30, 40, 60, 80, 90.

 Input format :
    The first line consists of an integer N, representing the size of the array.
    The second line consists of N space-separated integers, representing the array elements.

 Output format :
    The output prints space-separated integers representing the replaced array elements with the sum of its previous and next elements.
 */

#include<stdio.h>
#include<stdlib.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf(" %d",&ptr[i]);
    }
    int* rptr;
    rptr = (int*)malloc(n*sizeof(int));
    rptr[0]=ptr[0]+ptr[1];
    for(int i = 1;i<n;i++){
        rptr[i]=ptr[i-2]+ptr[i];
    }
    rptr[n-1]=ptr[n-2]+ptr[n-1];
    for(int i = 0;i<n;i++){
        printf("%d ",rptr[i]);
    }
    return 0;
}
// Created on 31-05-2024.

