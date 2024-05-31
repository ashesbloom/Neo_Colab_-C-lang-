/*
 Problem Statement
    Aryan is an enthusiastic young programmer who loves exploring matrices.
    Aryan is currently working on a program to calculate the sum of all even elements in a square matrix.
    He needs your help to complete the code.
    Write a program to assist Aryan in achieving his goal.
    The program should take an integer N as input, representing the size of a square matrix.
    Then, the program should read the elements of the matrix and calculate the sum of all even elements.
    Finally, it should print the total sum.

 Input format :
    The first line consists of a single integer N, representing the size of the square matrix.
    The next N lines contain N space-separated integers, representing the elements of the square matrix.

 Output format :
    If there are even elements in the matrix, display the sum of all even elements.
    If there are no even elements in the matrix, display "0".
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]%2==0){
                sum+=matrix[i][j];
            }
        }
    }
    if(sum==0){
        printf("0");
    }else{
        printf("%d",sum);
    }
    return 0;
}
// Created on 31-05-2024.

