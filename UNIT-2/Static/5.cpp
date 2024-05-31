/*
 Problem Statement
    A curious young student named Liam stumbled upon a mathematical problem that computes the sum of the squares of its digits.
    Help Liam compute the result by writing a program using a do-while loop.

 Note: This question helps in clearing AMCAT exam.

 Input format :
    The input consists of a positive integer n.

 Output format :
    The output displays the result representing the sum of the squares of its digits.

 Refer to the sample outputs for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    1 ≤ n ≤ 103
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n,rem;
    int sq,sum=0;
    scanf("%d",&n);
    do{
        rem = n%10;
        sq=1;
        sq = rem*rem;
        sum +=sq;
        n/=10;
    }while(n!=0);
    printf("%d",sum);
    return 0;
}
// Created on 31-05-2024.

