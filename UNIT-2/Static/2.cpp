/*
 Problem Statement
    Susi loves playing with numbers and exploring their unique properties.
    One day, she learned about palindromic numbers and decided to write a program to check if a given number is a palindrome or not.
    Can you help her accomplish this task using a while loop?

 Note: palindrome is a number that is the same when reversed. For example, 121, 1331, and 45654 are palindromic numbers.

 Input format :
    The input consists of a single integer, n, where n is the number that Susi wants to check for palindromic properties.

 Output format :
    The output displays one of the following messages:
    "Palindrome" if n is a palindrome.
    "Not a Palindrome" if n is not a palindrome.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    11 ≤ n ≤ 106
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int num,pal=0;
    int rem;
    scanf("%d",&num);
    int orignal=num;
    while(num!=0){
        rem=num%10;
        pal = pal*10+rem;
        num/=10;
    }
    if(orignal==pal){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
    return 0;
}
// Created n 31-05-2024.

