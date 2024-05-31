/*
 Problem Statement
    Nimisha is assigned to calculate the sum of divisors for a given positive integer.
    She needs a function called sumOfDivisors to calculate the sum of divisors for a given positive integer.
    Help her with the program.

 Example:
    If the number is 12, the sum of its divisors would be 1+2+3+4+6+12 = 28.

 Input format :
    The input consists of an integer n.

 Output format :
    The output prints the sum of all the divisors of n (inclusive).
 */

#include<stdio.h>
//Clang-12.0.0
int sumOfDivisors(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            sum+=i;
            // if(n/i!=i){
            //     sum+=i;
            // }
        }
    }
    return sum;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDivisors(n));
    return 0;
}
// Created on 31-05-2024.

