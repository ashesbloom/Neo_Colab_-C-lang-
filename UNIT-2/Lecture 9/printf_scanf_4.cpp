/*
 Problem Statement
    Charlie is intrigued by the concept of prime ASCII codes.
    Write a program to help Charlie determine whether a given character corresponds to a prime ASCII code.
    Check if the ASCII code is a prime number and print "yes" if it is prime and "no" otherwise.
    Assist Charlie in developing a program that accurately identifies prime ASCII codes for different characters.

 Input format :
    The input consists of a character c.

 Output format :
    The output prints "yes" if the converted ASCII code is a prime number, and "no" if it is not a prime number.

 Refer to the sample output for formatting specifications.

 Code constraints :
    In this scenario, the given test cases fall under the following constraints:
    The input character must be of either uppercase or lowercase letters.
 */

#include<stdio.h>
//Clang-12.0.0
int isprime(int num){
    if(num<=1){
        return 0;
    }
    if(num<=3){
        return 1;
    }
    if(num%2==0 && num%3==0){
        return 0;
    }
    for(int i = 2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    char n[2];
    scanf("%s",n);
    int ascii = n[0];
    if (isprime(ascii)){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}
// Created on 31-05-2024.

