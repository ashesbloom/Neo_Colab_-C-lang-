/*
 Problem Statement
    The university has a list of student GPAs, and they want to identify students who are eligible for a scholarship.
    To be eligible, a student's GPA must be greater than 3.5.
    Your task is to write a program using linear search to find the number of eligible students for scholarships.

 Input format :
    The first line of input consists of an integer N, representing the number of students.
    The second line consists of N space-separated floating-point numbers, each representing the GPA of a student.

 Output format :
    The output prints the number of eligible students (those with a GPA greater than 3.5).
    If no such students are found, print "No students found with GPA > 3.5"

 */

#include<stdio.h>
//Clang-12.0.0
int find(float *arr,int n){
    int result = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>3.5){
            result++;
        }
    }
    return result;
}

int main(void){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i = 0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    int result = find(arr,n);
    if(result!=0){
        printf("%d",result);
    }else{
        printf("No students found with GPA > 3.5");
    }
    return 0;
}
// Created on 31-05-2024.

