/*
 Problem Statement
    Raj is organizing an election and wants to calculate the percentage of votes received by a particular candidate.
    Guide him in creating a program that takes the number of votes the candidate received and
    the total number of votes as input and calculates the percentage of votes received by the candidate.
    Utilize pointers to create the program.

 Input format :
    The first line of input consists of an integer value n, representing the number of votes received by the candidate.
    The second line of input consists of an integer value m, representing the total votes.

 Output format :
    The program outputs the calculated percentage of votes received by the candidate with two decimal places.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int cv,tv;
    scanf("%d\n%d",&cv,&tv);
    float result = (100.00/tv)*cv;
    float *ptr = &result;
    printf("%.2f",*ptr);
    return 0;
}
//Created on 31-05-2024