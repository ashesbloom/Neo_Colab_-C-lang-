/*
 Problem Statement
    Rithesha is developing a C program to print the integer value 15. However, after some time,
    her manager requests to overwrite the value of 15 with 10.
    Assist her in printing the old as well as new values in separate lines.

 Input format :
    No console input.

 Output format :
    The output displays the old as well as new integer values in separate lines.
*/

#include <stdio.h>
//Clang-12.0.0
int main() {
    int n=15; // Declaring an integer variable n with a value of 15.
    printf("%d\n",n);
    n=10; // Overwriting the value of 15 with 10.
    printf("%d",n);

    return 0;
}

// Created on 21-04-2024.
