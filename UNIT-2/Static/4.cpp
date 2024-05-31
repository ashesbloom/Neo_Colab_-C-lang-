/*
 Problem Statement
    Bethany is supposed to determine a number's strength is determined by the sum of factorials of its digits.
    Create a program for her that takes a long integer as input and validates if the given number code is a strong number or not.
    If the sum of factorials is equal to the original number, the output must print "Strong number";
    otherwise, it prints "Not a strong number."

 Input format :
    The input consists long integer n, representing the number.

 Output format :
    The output prints "Strong number" if the given number is strong, otherwise it prints "Not a strong number".

 Refer to the sample output for formatting specifications.

 Code constraints :
    In this scenario, the given test cases fall under the following constraints:
    1 ≤ n ≤ 50000
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    long int n;
    long int rem;
    scanf("%ld",&n);
    long int ori = n;
    long long int fact,sum=0;
    while(n!=0){
        rem=n%10;
        fact = 1;
        for(long int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==ori){
        printf("Strong number");

    }else{
        printf("Not a strong number");
    }
    return 0;
}
// Created on 31-05-2024.

