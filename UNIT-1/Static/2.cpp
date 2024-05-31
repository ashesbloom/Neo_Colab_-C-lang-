/*
 Problem Statement

    John is eager to create a simple program for gathering and presenting personal details.
    Write a program that prompts users to provide the initial letter of their name (a character), age (an integer),
    and height in meters (a floating-point number).
    After collecting this information, display it in a well-organized format.
 Input format :
    The input consists of three space-separated values, representing the first letter of the name (character), age (integer), and height in meters (floating point value), separated by spaces.

 Output format :
    The first line prints the initial of the name in the format "Initial: [initial]"
    The second line prints the age in the format "Age: [age] years"
    The third line prints the height of the person, rounded to two decimal places, in the format "Height: [height] meters"

 Refer to the sample output for formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    10 ≤ Age ≤ 50
    0.01 ≤ Height ≤ 1.80
 */
#include<stdio.h>
//Clang-12.0.0
int main(void){
    char name[1];
    int age;
    float height;
    scanf("%s %d %f",&name,&age,&height);
    printf("Initial: %s\nAge: %d years\nHeight: %.2f meters",name,age,height);
}
// Created on 31-05-2024.
