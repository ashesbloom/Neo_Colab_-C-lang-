/*
 Problem Statement
    Ben is studying matrices and wants to write a program that swaps two rows of a matrix (N, M), the program takes an input matrix,
    swaps the specified rows, and then displays the modified matrix.
    Assist him with the program.

 Input format :
    The first line consists of two space-separated integers N and M, representing the number of rows and columns in the matrix.
    The next N lines contain M space-separated integers each, representing the elements of the matrix.
    The last line consists of two space-separated integers r1 and r2, representing the row numbers to be interchanged.

 Output format :
    If the input row numbers r1 or r2 are invalid (less than 1 or greater than the number of rows), the output prints "Invalid row numbers".
    Otherwise, the modified matrix is printed after swapping the specified rows.
 */

#include<stdio.h>
//Clang-12.0.0

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int r1,r2;
    scanf("%d %d",&r1,&r2);
    if(r1<=n&&r2<=n){
        int temp;
        for(int i = 0;i<m;i++){
            temp = matrix[r1-1][i];
            matrix[r1-1][i]=matrix[r2-1][i];
            matrix[r2-1][i]=temp;
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Invalid row numbers");
    }
    return 0;
}
// Created on 31-05-2024.

