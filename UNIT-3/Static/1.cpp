/*
 Problem Statement
    Durga, a computer science student, wants to write a program that inputs a character and determines
    its predecessor according to two rules:
    If the character is 'a' or 'A', map it to 'z' or 'Z'
    For any other character, map it to the one immediately before it.
    Help her with the program that uses a function called processInput() and prints the immediate predecessor of the input character.

 Input format :
    The input character is a valid alphabetical character (either uppercase or lowercase).

 Output format :
    The output displays a single character, which is the predecessor of the input character based on the specified rules.
 */

#include<stdio.h>
//Clang-12.0.0

int processInput(int n){
    if(n==97){
        return 122; //ascii value of 'z' is 122
    }else if(n==65){
        return 90; //ascii value of 'Z' is 90
    }else{
        return --n;
    }

}

int main(void){
    char n[2];
    scanf("%s",n);
    int ascii = n[0];
    char r = (char)processInput(ascii);
    printf("%c",r);
    return 0;
}
// Created on 31-05-2024.

