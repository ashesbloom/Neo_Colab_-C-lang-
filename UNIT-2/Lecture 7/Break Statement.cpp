/*
 Problem Statement
    Continuously input positive integers until 0 is entered.
    For each input, calculate and display its square and cube in a concise format, maintaining this process until the input is 0.

 Note: This question helps in clearing technical coding tests in companies like Wipro, TCS, Infosys.

 Input format :
    The input consists of positive integers. Enter 0 to terminate the input.

 Output format :
    The output prints the square and cube of the given integers.

 Refer to the sample output for formatting specifications.

 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    while(1){
        scanf("%d",&n);
        if (n==0){
            break;
        }else{
            printf("Square of %d is %d\n",n,n*n);
            printf("Cube of %d is %d\n",n,n*n*n);
        }
    }
}
// Created on 31-05-2024.

