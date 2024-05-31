/*
 Problem Statement
    Sharon wants to create a program that declares and initializes pointers of various types (void, integer, character, and float)
    and prints their sizes using the sizeof operator.
    Assist Sharon in achieving the task.

 Input format :
    No console input.

 Output format :
    The first line of output displays "Void Pointer = " followed by the size of the void pointer.
    The second line displays "Integer Pointer = " followed by the size of the integer pointer.
    The third line displays "Character Pointer = " followed by the size of the character pointer.
    The fourth line displays "Float Pointer = " followed by the size of the float pointer.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n = 8;
    void *voidptr;
    int *intptr;
    char *charptr;
    float *floatptr;

    printf("Void Pointer = %u\n", sizeof(voidptr));
    printf("Integer Pointer = %u\n",sizeof(intptr));
    printf("Character Pointer = %u\n",sizeof(charptr));
    printf("Float Pointer = %u\n",sizeof(floatptr));
    return 0;
}
// Created on 31-05-2024.

