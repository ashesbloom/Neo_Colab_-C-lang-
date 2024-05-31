/*
 Problem Statement
    During sports events, especially in races or competitions, the time taken by a participant is recorded in seconds.
    Convert the time into HH:MM:SS format allows event organizers, participants, and spectators to understand and compare the timings easily.
    Write a program that displays the final time in the desired format.

 Input format :
    The input consists of an integer n, representing the time taken in seconds.

 Output format :
    The output prints the equivalent time in the format HH:MM:SS.

 Refer to the sample output for formatting specifications.

 Code constraints :
    In this scenario, the given test cases fall under the following constraints:
        60 ≤ n ≤ 7200
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int hr,min;
    hr = n/3600;
    n %=3600;
    min = n/60;
    n %= 60;
    printf("%02d:%02d:%02d",hr,min,n);
    return 0;
}
// Created on 31-05-2024.

