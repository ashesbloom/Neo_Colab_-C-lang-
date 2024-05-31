/*
 Problem Statement
    Aisha is an avid reader who loves exploring different genres of books.
    She is looking for a program that allows her to input a series of 8 integers, each representing the number of pages
    she read in a particular session. Once she has input all eight integers, the program should display the number of pages read in each session.
    Assist Aisha in writing a program to fulfill the above request.

 Input format :
    The input consists of 8 space-separated integer values, representing the number of pages read in a particular session.

 Output format :
    The output displays a single line containing eight space-separated integer values representing the number of pages read in each session.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int arr[8];
    for(int i=0;i<8;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i = 0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Created on 31-05-2024.


