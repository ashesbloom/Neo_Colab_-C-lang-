/*
 Problem Statement
    Kumar wants to design a program to analyze race timing data using the bubble sort algorithm.
    Write a program to help Kumar find and display the second-fastest race time in seconds from a given list of race times.

 Input format :
    The first line of input consists of an integer N, representing the number of race times.
    The second line consists of N space-separated integers, representing the individual race times in seconds.

 Output format :
    If N is less than 2, print "Insufficient data to find the second-fastest time."
    Otherwise, print the value of the second-fastest race time, in seconds.
 */

#include<stdio.h>
//Clang-12.0.0
int bubble_sort(int *a,int n){
    int check = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                check = 1;
            }
        }
        if(check == 0){
            break;
        }
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    if(n>1){
        bubble_sort(a,n);
        printf("%d seconds",a[n-2]);
    }else{
        printf("Insufficient data to find the second-fastest time.");
    }
    return 0;
}
// Created on 31-05-2024.
