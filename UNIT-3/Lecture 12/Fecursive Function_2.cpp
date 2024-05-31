/*
 Problem Statement
    Helen is developing a program for a gaming application that involves generating a sequence of mystical numbers based on the Tribonacci series.
    She needs to implement a recursive function tribonacci to determine the Tribonacci numbers for various stages of the quest.
    Write a program to achieve her task.
    The Tribonacci series is a sequence of numbers defined as the sum of the three preceding terms. 0, 1, 1, 2, 4, 7, 13, and so on.

 Input format :
    The input consists of a positive integer n.

 Output format :
    The output displays the n terms in the Tribonacci series, separated by a space.
 */

#include<stdio.h>
//Clang-12.0.0
int tribonacci(int i){
    if(i==0) return 0;
    if(i==1||i==2) return 1;
    return tribonacci(i-1)+tribonacci(i-2)+tribonacci(i-3);
}
int seq_index(int n){
    for(int i = 0;i<n;i++){
        printf("%d ",tribonacci(i));
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    seq_index(n);
    return 0;
}
// Created on 31-05-2024.

