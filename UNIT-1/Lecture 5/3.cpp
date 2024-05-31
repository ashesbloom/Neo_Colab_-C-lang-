/*
 Problem Statement
    Vanesa, a Math teacher, is eager to introduce students to relational operators (>, >=, <, <=, ==, !=).
    Create a program that takes two integer inputs x and y, and prints the results: 1- true, and 0- false
    for the given relational expressions.
    Assist Vanesa in crafting an engaging lesson on relational operators using this program.

 Input format :
    The input consists of two space-separated integers, x and y.

 Output format :
    The output prints the results of various relational expressions based on the given performance scores in the following format:

    "x > y: " followed by the result of x > y.
    "x >= y: " followed by the result of x >= y.
    "x < y: " followed by the result of x < y.
    "x <= y: " followed by the result of x <= y.
    "x == y: " followed by the result of x == y.
    "x != y: " followed by the result of x != y.

 Refer to the sample output for formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    1 ≤ x, y ≤ 100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int x ,y;
    scanf("%d %d",&x,&y);
    printf("x > y: %d\n",x>y);
    printf("x >= y: %d\n",x>=y);
    printf("x < y: %d\n",x<y);
    printf("x <= y: %d\n",x<=y);
    printf("x == y: %d\n",x==y);
    printf("x != y: %d",x!=y);
}
// Created on 31-05-2024.
