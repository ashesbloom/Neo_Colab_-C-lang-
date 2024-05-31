/*
 Problem Statement
    Create a program that generates and prints the Fibonacci series up to a specified number 'N'.
    The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding numbers, starting with 0 and 1.
    Your program should take an integer input 'N' and display the Fibonacci series up to the Nth term using a while loop.
    Fibonacci series: 0, 1, 1, 2, 3, 5, 8,...

 Note: This question is one of the most asked questions in placements.

 Input format :
    The input consists of a positive integer N.

 Output format :
    The output displays the Fibonacci series up to the Nth term separated by space.

 Refer to the sample output for the formatting specifications.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int limit;
    scanf("%d",&limit);
    int count=1;
    int a=0,b=1,c=0;
    while(count<=limit){
        printf("%d ",c);
        c=a+b;
        b=a;
        a=c;
        count++;
    }
    return 0;
}
// Created on 31-05-2024.

