/*
 Problem Statement
    Beula is solving a mathematical problem and seeks your assistance in writing a program.
    She is particularly interested in finding numbers with exactly 9 factors.
    Help her by creating a program that takes an integer N as input and identifies numbers from 1 to N that have exactly 9 factors.

 Function Specifications:
    check_9_factors - Prints the integers that have exactly 9 divisors as well as the total number of such integers.

 Note: This question helps in clearing technical coding tests for companies like Infosys.

 Input format :
    The input consists of an integer N.

 Output format :
    The first line displays space-separated integers representing numbers from 1 to N that have exactly 9 factors.
    The second line displays a single integer representing the count of numbers with exactly 9 factors.
 */

#include<stdio.h>
//Clang-12.0.0
int check_9_factors(int x){
    int factor = 0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            factor++;
            if(x/i!=i){
                factor++;
            }
        }
    }
    return factor==9;
}

int main(void){
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(check_9_factors(i)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}
// Created on 31-05-2024.

