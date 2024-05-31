/*
 Problem Statement
    Betty is exploring character encryption using a program. She wants to encrypt a given character based on specific rules:
    Encrypt a given character by adding 2 to the ASCII value for uppercase
    Subtract 2 for lowercase letters.
    For non-alphabetic characters, add 5 to the ASCII value.
    Create a program that takes Betty's input character, converts it to a signed char, and prints the encrypted result.

 Input format :
    The input consists of a char value 'n', representing the character entered by Betty.

 Output format :
    The output displays the encrypted character after performing a conversion based on the given rules in the problem statement.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    The character n contains both lowercase, uppercase, and special characters.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    char n[2];
    scanf("%s",n);
    int ascii = n[0];
    char r[2];
    if (ascii>=65 && ascii<=90){
        ascii+=2;
        r[0] = (signed char)ascii;
        printf("%s",r);
    }else if(ascii>=97 && ascii<=122){
        ascii-=2;
        r[0] = (signed char)ascii;
        printf("%s",r);
    }else{
        ascii+=5;
        r[0] = (signed char)ascii;
        printf("%s",r);
    }
    return 0;
}
// Created on 31-05-2024.

