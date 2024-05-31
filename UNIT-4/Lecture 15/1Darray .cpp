/*
 Problem Statement
    Raj, a coding hobbyist, is working on a binary matrix manipulation program.
    He wants to create a simple tool to input binary values in the form of a matrix and display the entered binary pattern.
    Write a program that takes the dimensions (rows and columns) of a binary matrix as input, reads the binary values,
    and then displays the entered binary pattern grid.

 Input format :
    The first line of input consists of two space-separated integers r, and c, representing the number of rows and columns of the binary matrix.
    The next r lines consist of c space-separated binary values (0 or 1) representing the elements of the array.

 Output format :
    The output displays the entered binary pattern grid.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int r,c;
    scanf("%d %d",&r,&c);
    int bin[r][c];
    for(int i = 0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d ",&bin[i][j]);
            printf("%d ",bin[i][j]);
        }
        printf("\n");
    }


    return 0;
}
// Created on 31-05-2024.

