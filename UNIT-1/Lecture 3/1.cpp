/*
 Problem Statement
    Harsh is learning about constants and variables in C programming.
    He is curious to understand how to declare and use different types of variables.

 Write a program for Harsh that:
    Declares and initializes an integer variable myNum with the value 5.
    Declares and initializes a float variable myFloatNum with the value 5.99.
    Declares and initializes a character variable myLetter with the value 'D'.
    Prints the character.
    Declares and initializes a float variable myScore with the value 8.51.
    Prints the float variable myScore, rounded off to one decimal place.
    Declares and initializes an integer variable sum by dividing 10 by 2.
    Prints the integer variable sum.

 Fill the code with the appropriate terms.

Note: This question helps in implementing logic for company-specific questions.

 Input format :
    No console input.

 Output format :
    The first line of output prints the character value.
    The second line prints the float value with one decimal place.
    The third line prints the integer value.
*/


#include <stdio.h>
//Clang-12.0.0
int main() {
    int myNum = 5;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    printf("%c\n", myLetter );

    float myScore = 8.51;
    printf("%.1f\n", myScore);

    int sum = (10 / 2);
    printf("%d", sum);

    return 0;
}

// Created on 21-04-2024.

