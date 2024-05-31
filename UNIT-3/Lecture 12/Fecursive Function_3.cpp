/*
 Problem Statement
    Develop a program to simulate the countdown sequence for a historic rocket launch.
    Given a positive integer n representing the number of seconds left, the program should print a countdown sequence in the format "n-(n-1)-...-1".
    This countdown replicates the final moments before the liftoff of a significant space mission.
    Write a recursive function called countdown that takes n as input and prints the countdown sequence.

 Input format :
    The input consists of an integer n, representing the number of seconds left for the rocket launch.

 Output format :
    The output prints the countdown sequence in the format: "n-(n-1)-...-1".
 */

#include<stdio.h>
//Clang-12.0.0
void countdown(int n){
    if(n==1){
        printf("%d",1);
    }else{
        printf("%d-",n);
        countdown(n-1);
    }

}

int main(void){
    int n;
    scanf("%d",&n);
    countdown(n);
    return 0;
}
// Created on 31-05-2024.

