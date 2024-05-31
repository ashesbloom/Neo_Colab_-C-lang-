/*
 Problem Statement
    Helen is tasked with implementing a new employee ID system in her company. To achieve this,
    she needs to create an array that can hold 'n' integers, where 'n' represents the number of employees.
    Each element in this array should represent a unique employee ID.
    The unique ID for each employee is determined by adding 100 to their respective index in the array.
    The objective is to initialize the array such that each element contains its corresponding unique employee ID,
    and then display the contents of the fully initialized array.

 Input format :
    The input consists of a positive integer 'n', representing the number of employees.

 Output format :
    The output displays the unique employee ID of 'n' employees separated by space.

 */

#include<stdio.h>
//Clang-12.0.0

int main(void){
    int n;
    scanf("%d",&n);
    int a[30];
    for(int i=0;i<n;i++){
        int id = 100+i;
        a[i] = id;
        printf(" %d",a[i]);
    }

    return 0;
}
// Created on 31-05-2024.

