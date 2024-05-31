/*
 Problem Statement
    Raj is organizing an event where participants are required to choose a number range to register.
    The registration system needs to filter out numbers that are either divisible by 3 or 5.
    Write a program using a call-by-reference function to assist him in this process.
    Take two integer inputs, the start and end of the chosen number range, and output the numbers within that range that are divisible by 3 or 5.

 Function Specifications: void numbers(int *x, int *y)

 Input format :
    The input consists of two space-separated integers: x and y, representing the start and end limit ranges, respectively.

 Output format :
    The output displays the space-separated integers that are divisible by 3 or 5 from x to y.
    The starting limit is inclusive and the ending limit is exclusive.
 */

#include<stdio.h>
//Clang-12.0.0
void numbers(int *x,int *y){
    for(int i = *x;i<*y;i++){
        if(i%3==0 || i%5==0){
            printf("%d ",i);
        }
    }
}

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    numbers(&x,&y);
    return 0;
}
// Created on 31-05-2024.

