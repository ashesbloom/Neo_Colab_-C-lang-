/*
 Problem Statement
    In a classroom of students preparing for exams, the teacher asks them to share their scores.
    Write a program using linear search to find the second occurrence of a specific score in the array of student scores.
    Display the index of the second occurrence if found, otherwise, a message indicating that the score was not found or occurred only once.
    Students eagerly await the program's output to identify classmates who share the same score, fostering a collaborative study environment.

 Input format :
    The first line of input consists of an integer N, representing the number of students.
    The second line consists of N space-separated integers, representing the scores of the students.
    The third line consists of an integer representing, the score to find the second occurrence.

 Output format :
    If the score is not found, print "Score not found."
    If the score occurred only once, print "Score found only once."
    Otherwise, print the index of the second occurrence of the given score (index starts from 0).

 */

#include<stdio.h>
//Clang-12.0.0
int linear_search(int *a,int n,int s){
    int check = 0;
    for(int i = 0;i<n;i++){
        if(a[i]==s){
            check++;
            if(check>=2){
                printf("%d",i);
                return 0;
            }
        }
    }
    if(check<2){
        printf("Score found only once.");
    }else{
        printf("Score not found.");
    }

}

int main(void){
    int n,s;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    scanf("%d",&s);

    linear_search(a,n,s);

    return 0;
}
// Created on 31-05-2024.S

