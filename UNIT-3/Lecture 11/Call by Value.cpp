/*
 Problem Statement
    Grace is fascinated by palindromic numbers and wants a program that
    accepts an integer as input and identifies the next smallest palindromic number that is greater than or equal to the input.
    Utilize a function called isPalindrome to check if a number is a palindrome and a function called findNext to find the next smallest palindrome.

 Note: This question helps in clearing technical coding tests for companies like Flipkart and Amazon.

 Input format :
    The input consists of an integer N, which represents the starting point for finding the next smallest palindromic number.

 Output format :
    The output displays an integer representing the next smallest palindromic number that is greater than or equal to N.

 */

#include<stdio.h>
//Clang-12.0.0
int isPalindrome(int x){
    int ori = x;
    int p = 0;
    while(x>0){
        int r = x%10;
        p = (p*10)+r;
        x/=10;
    }
    return ori==p;
}

int findNext(int x){
    while(1){
        x++;
        if(isPalindrome(x)){
            return x;
        }
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    if(isPalindrome(n)){
        printf("%d",n);
    }else{
        printf("%d",findNext(n));
    }
    return 0;
}
// Created on 31-05-2024.

