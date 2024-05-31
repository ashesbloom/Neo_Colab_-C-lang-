/*
 Problem Statement:
    Thiru is working on a grading system for his class of students.
    He needs a program that takes input for student scores, inserts a new score at the beginning and end of the existing scores,
    and then displays the modified list of scores.
    Write a program to help Thiru achieve this.

 Input format :
    The first line of input is an integer, the value n, indicating the number of elements in the array.
    The second line of input consists of n space-separated integers, representing the elements of the array arr[i].
    The third line of input consists of two integers M and P, representing the value to be inserted at the beginning
    and ending of the array, separated by a space.

 Output format :
    The output is a single line containing n + 2 space-separated integers,
    which represent the modified array after inserting the element at the beginning and ending of the existing scores.
 */

#include<stdio.h>
//Clang-12.0.0
void display(int arr[100],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);

    for(int i = n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=a;
    n++;
    arr[n]=b;
    n++;
    display(arr,n);
    return 0;
}
// Created on 31-05-2024.

