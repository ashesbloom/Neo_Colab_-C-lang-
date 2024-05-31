/*
 Problem Statement
    Sam is developing a program for analyzing daily temperature fluctuations. Users input the number of days,
    followed by daily temperature values whose memory is allocated using malloc.
    The program calculates and displays the following:
    The absolute temperature changes between consecutive days (The first value remains the same).
    The average temperature of adjacent days.
    This allows users to gain insights into daily temperature variations for better analysis.

 For Example,
    Let us assume the temperature for 3 days as 25.5, 28.0, and 23.5.
    The absolute differences:
    Day 1: (N/A, as there is no previous day) = 25.50
    Day 2: abs(28.0 - 25.5) = 2.50
    Day 2: abs(23.5 - 28.0) = 4.50

    The average temperatures:

    Day 1: (N/A, as there is no previous day) = 25.50
    Day 2: (25.5 + 23.5) / 2.0 = 24.50
    Day 3: (N/A, as there is no next day) = 23.50
 Input format :
    The first line consists of an integer N, representing the number of days.
    The second line consists of N space-separated float values, representing the temperature values for N days.

 Output format :
    The first line displays the absolute temperature change for N days as float values, rounded to two decimal places, separated by a space.
    The second line displays the average temperature for N days as float values, rounded to two decimal places, separated by a space.
 */


#include<stdio.h>
#include<stdlib.h>
//Clang-12.0.0

void absdiff(float *arr,int n,float *arr2){
    arr2[0]=arr[0];
    for(int i=1;i<n;i++){
        arr2[i]= abs(arr[i-1]-arr[i]);
    }
}

void avgtemp(float *arr,int n,float *avg){
    avg[0]=arr[0];
    for(int i=1;i<n-1;i++){
        avg[i]=(arr[i]+arr[i-1])/2.0;
    }
    avg[n-1] = arr[n-1];
}

void display(float *arr,int n){
    for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    float *arr;
    arr = (float*)malloc(n*sizeof(float));
    float* arr2 = (float*)malloc(n*sizeof(float));
    float* avg = (float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    absdiff(arr,n,arr2);
    avgtemp(arr,n,avg);
    display(arr2,n);
    printf("\n");
    display(avg,n);

    return 0;
}
// Created on 31-05-2024.

