/*
 Problem statement
    Raj is working on a data analysis project and needs help creating a program that processes a 2D array.
    This program includes functions to calculate the average value of each row in a 2D array.
    The program should consist of several functions:

    calculateRowAverage(cols, row): Calculates the average of a single row in a 2D array.
    calculateAverages(rows, cols, arr, averages): Computes and stores the averages for each row in the 2D array.
    displayAverages(rows, averages): Displays the row number and its average value.

 Input format :
    The first line of input consists of two integers, rows and cols, representing the dimensions of the 2D array.
    The second line of input consists of the elements arr[i] of the 2D array, where each element is a double.

 Output format :
    The output displays the average value of each row as a double datatype value, rounded off two decimal points in the specified format:
    Average of each row:

    Row 1: [row1_avg]
    Row 2: [row2_avg]
    Row 3: [row3_avg]

 */

#include<stdio.h>
//Clang-12.0.0
double average(double arr[],int n){
    double avg,sum = 0.0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg = sum/n;
    return avg;
}

double result_arr(double avg,int i,double result[][1]){
    result[i][0]=avg;
}

void display(double result[][1],int n){
    printf("Average of each row:\n");
    for(int i=0;i<n;i++){
        printf("Row %d: %.2lf\n",i+1,result[i][0]);
    }
}

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    double arr[n][m];
    double result[n][1];
    for(int i = 0; i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%lf ",&arr[i][j]);
        }
        double avg = average(arr[i],m);
        result_arr(avg,i,result);
    }
    display(result,n);

    return 0;
}
// Created on 31-05-2024.

