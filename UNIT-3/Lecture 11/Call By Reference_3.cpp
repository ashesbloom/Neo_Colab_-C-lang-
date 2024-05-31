/*
 Problem Statement
    A group seeks a hidden treasure along a trail of even numbers.
    Write a program using a call-by-reference function to print the sequence of even numbers
    between a starting and ending point, guiding the adventurers to the treasure.

 Function Specifications: void even(int *a, int *b)

 Input format :
    The first line consists of an integer a, representing the starting point.
    The second line consists of an integer b, representing the ending point

 Output format :
    The output displays even numbers from a (inclusive) to b (not inclusive) separated by a space.
*/

#include<stdio.h>
//Clang-12.0.0
void even(int *a,int *b){
    for(int i = *a ; i < *b ; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}

int main(void){
    int x,y;
    scanf("%d\n%d",&x,&y);
    even(&x,&y);
    return 0;
}
// Created on 31-05-2024.

