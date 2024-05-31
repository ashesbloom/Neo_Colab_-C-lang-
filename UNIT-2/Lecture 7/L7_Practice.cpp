/*
 Problem Statement
    Emily is an aspiring programmer on a mission to create a  program that acts as a "Square-Free number finder".
    A square-free number is not divisible by the square of any integer other than 1 for the given number.
    Write a program that utilizes the goto statement for control flow, and checks if it meets the criteria of being square-free.

 Note: This question helps in clearing TCS Codevita exam.

 Input format :
    The first line of input consists of an integer value 'n', representing the positive integer as input.

 Output format :
    The output displays whether the given number is a square-free number or not.

 Refer to the sample output for the formatting specifications.
*/

#include<stdio.h>
//Clang-12.0.0
int checker(int num){
    int sq=num*num;
    if(num==1){
        return 1;
    }
    for(int i = 2;i<sq;i++){
        if(num%(i*i)==0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int x;
    scanf("%d",&x);
    if (checker(x)){
        printf("Square-Free");

    }else{
        printf("Not Square-Free");
    }
    return 0;
}
// Created on 31-05-2024.

