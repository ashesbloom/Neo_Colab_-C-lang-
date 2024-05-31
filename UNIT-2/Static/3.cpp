/*
 Problem Statement
    A computer science teacher assigned the students a programming task that calculates and displays grades based on test marks.
    The teacher wants the program to take a student's test mark as input and determine their grade using the following criteria:
    If the mark is between 90 and 100 (inclusive), assign grade A.
    If the mark is between 80 and 89 (inclusive), assign grade B.
    If the mark is between 70 and 79 (inclusive), assign grade C.
    If the mark is between 60 and 69 (inclusive), assign grade D.
    If the mark is between 45 and 59 (inclusive), assign grade E.
    For marks below 45 assign grade F.
    If the mark is greater than 100 or a negative number, it displays "Invalid input". Help the students to accomplish the given task.

 Note: This question helps in clearing AMCAT exam.

 Input format :
    The input consists of a single integer, representing the student's mark.

 Output format :
    The output displays "Grade: " followed by the grade for the given mark based on the given criteria.
    If the mark is greater than 100 or a negative number, the output displays "Invalid input".


 Refer to the sample output for the formatting specifications.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    char r[2];
    scanf("%d",&n);
    if (n>=0&&n<=100){
        if(n<=100&&n>=90){
            r[0]='A';
        }else if(n<=89&&n>=80){
            r[0]='B';
        }else if(n<=79&&n>=70){
            r[0]='C';
        }else if(n<=69&&n>=60){
            r[0]='D';
        }else if(n<=59&&n>=45){
            r[0]='E';
        }else{
            r[0]='F';
        }
        printf("Grade: %s",r);
    }else{
        printf("Invalid input");
    }
    return 0;
}
// Created on 31-05-2024.

