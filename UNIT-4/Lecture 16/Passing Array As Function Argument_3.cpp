/*
 Problem statement
    Aryan is solving a puzzle to determine if a n x n matrix is a magic square.
    He needs to input a matrix and the code checks if the sum of each row, column, and diagonals is the same.
    Aryan's task is to create a function that takes an n x n matrix as an input and returns whether the matrix is a magic square or not.
 Magic Square Conditions:
    For a n x n matrix to be a magic square, the sums of main and secondary diagonals, rows, and columns must be equal.
    If met, the matrix is magical; otherwise, it's not.
 Functions Specifications:
    rowSum(matrix, row): Calculates the sum of a given row in the matrix.
    colSum(matrix, col): Calculates the sum of a given column in the matrix.
    mainDiagonalSum(matrix): Calculates the sum of the main diagonal.
    secondaryDiagonalSum(matrix): Calculates the sum of the secondary diagonal.
    isMagicSquare(matrix): Checks if the matrix is a magic square.
 Input format :
    The first line of input consists of an integer value n, representing the size of the square matrix.
    The next line input consists of a n x n matrix, where each element is an integer separated by space.

 Output format :
    If the given matrix is a magic square, output "The given matrix is a magic square."
    If the given matrix is not a magic square, output "The given matrix is not a magic square."
 */

#include<stdio.h>
//Clang-12.0.0
int rowsum(int arr[100][100],int row,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[row][i];
    }
    return sum;
}

int colsum(int arr[100][100],int col,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i][col];
    }
    return sum;
}

int diasum1(int arr[100][100],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i][i];
    }
    return sum;
}

int diasum2(int arr[100][100],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i][n-i-1];
    }
    return sum;
}

int check(int arr[100][100],int n){
    int dsum1 = diasum1(arr,n);
    int dsum2 = diasum2(arr,n);
    if(dsum1!=dsum2) return 0;
    for(int i = 0;i<n;i++){
        if(rowsum(arr,i,n)!=dsum1 && colsum(arr,i,n)!=dsum1){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[100][100];
    for(int i = 0 ;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    if(check(arr,n)){
        printf("The given matrix is a magic square");
    }else{
        printf("The given matrix is not a magic square");
    }

    return 0;
}
// Created on 31-05-2024.

