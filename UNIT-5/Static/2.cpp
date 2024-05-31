/*
Problem Statement
    Aman is assigned a program that takes a generic pointer (void *) to handle different data types.
    You have to guide him in completing the program.
    The program prompts the user to input a data type identifier ('i' for integer, 'f' for float) and a corresponding value.
    Using a switch statement, print the entered value with the appropriate data type label.  Any other input except ('i' and 'f') is given,
    print "Invalid type entered!"

Input format :
    The first line of input consists of a character, representing a data type (i for integer or f for float).
    If the character is i, the second line consists of an integer value.
    If the character is f, the second line consists of a floating-point value.

Output format :
    If the character is i, print "Integer: " followed by the integer value.
    If the character is f, print "Float: " followed by the float value, rounded off to two decimal places.
    If any other character is entered, print "Invalid type entered!"
 */

#include <stdio.h>
//Clang-12.0.0
void printValue(void *ptr, char type) {
    switch (type) {
        case 'i':
            printf("Integer: %d\n", *(int *)ptr);
            break;
        case 'f':
            printf("Float: %.2f\n", *(float *)ptr);
            break;
        default:
            printf("Invalid type entered!\n");
    }
}

int main() {
    char type;

    scanf(" %c", &type);

    if (type == 'i') {
        int intValue;

        scanf("%d", &intValue);
        printValue(&intValue, type);
    } else if (type == 'f') {
        float floatValue;

        scanf("%f", &floatValue);
        printValue(&floatValue, type);
    } else {
        printf("Invalid type entered!\n");
    }

    return 0;
}

// Created on 31-05-2024.

