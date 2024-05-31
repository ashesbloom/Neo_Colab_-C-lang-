/*
 Problem Statement
    Suresh is working on a program that checks the case of an input character.
    He needs a simple solution that uses a function called check() to determine whether the given character
    is in uppercase, lowercase, or invalid.
    Can you assist Suresh in creating this program?

 Note: This question helps in clearing technical coding tests for companies like Wipro.

 Input format :
    The input consists of a single character.

 Output format :
    The output is a single line indicating the case of the input character. It can be one of the following:
    "Upper Case" if the input character is an uppercase letter.
    "Lower Case" if the input character is a lowercase letter.
    "Invalid" if the input character is neither an uppercase nor a lowercase letter.

 */

#include<stdio.h>
#include<ctype.h>
//Clang-12.0.0
void check(char x){
    if(isalpha(x)){
        if(islower(x)){
            printf("Lower Case");
        }else{
            printf("Upper Case");
        }
    }else{
        printf("Invalid");
    }
}

int main(void){
    char ch;
    scanf("%c",&ch);
    check(ch);
    return 0;
}
// Created on 31-05-2024.

