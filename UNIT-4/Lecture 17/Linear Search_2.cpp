/*
 Problem Statement
    Ashok wants to develop a program for a classroom seating arrangement system where students are represented by unique integers.
    Implement a function to perform a linear search and swap the positions of two students based on their IDs.
    In the main program, input the number of students, their IDs, and the IDs of two students to swap.
    Display the updated seating arrangement after swapping the positions of the specified students.

 Input format :
    The first line of input consists of an integer N, representing the number of students.
    The second line consists of N space-separated integers, representing the student IDs.
    The third line consists of an integer, representing the ID of the first student to swap.
    The fourth line consists of an integer, representing the ID of the second student to swap.

 Output format :
    The output prints the updated seating arrangement after swapping the positions of the specified students.
 */

#include<stdio.h>
//Clang-12.0.0
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int linear(int *arr,int n,int t){
    for(int i = 0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return 0;
}

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    swap(&arr[linear(arr,n,a)],&arr[linear(arr,n,b)]);

    display(arr,n);

    return 0;
}
// Created on 31-05-2024.

