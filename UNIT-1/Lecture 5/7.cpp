/*
 Problem Statement
    Emma is a math enthusiast trying to solve a puzzle. She has four integers and
    wants to check if the sum of the first two integers is 10 and if the difference between the third and fourth integers is 3.
    If these conditions are met, she calculates the product of the four integers.
    Write a program that takes input for these integers, checks the conditions,
    and displays the product if they are satisfied, otherwise print "Not Satisfied". Use relational, logical,
    and ternary operators in your solution.

 Input format :
    The input consists of four space-separated integers, representing n1, n2, n3 and n4.

 Output format :
    If the conditions (first + second == 10 and third - fourth == 3) are satisfied,
    the output is an integer representing the product of all four numbers (first * second * third * fourth).
    Otherwise, the output is the string "Not satisfied".

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, the test cases fall under the following constraints:
    1 ≤ n1, n2, n3 and n4 ≤ 9
 */
#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    ((n1+n2)==10 && (n3-n4)==3)?printf("%d",n1*n2*n3*n4):printf("Not satisfied");
    return 0;
}
// Created on 31-05-2024.

