/*
 Problem Statement
    A school administrator needs to display the information of a student.
    The student has an ID (an integer) of 15, an age (an integer) of 23 and achieved a grade (a character) 'B'.
    Write a C program to print these details using appropriate data types and formatting.

 Input format :
    No console input.

 Output format :
    The output displays the values in the below format:
    Student id: 15
    Student age: 23
    Student grade: B

Refer to the sample output for the formatting specifications
 */

#include <stdio.h>
//Clang-12.0.0
int main() {
    printf("Student id: %d\n",15);
    printf("Student age: %d\n",23);
    printf("Student grade: %s","B");
}
// Created on 31-05-2024.

