/*
 Problem Statement
    Arun is working on a software development project, where the task IDs are assigned sequentially in ascending order.
    Due to a revision in the project plan, the task list has been rotated, causing uncertainty in identifying the task with the highest ID.
    Help Arun develop a program using binary search to swiftly determine the maximum task ID,
    helping the project team maintain clarity in task management.

 Input format :
    The first line of input consists of an integer N, representing the number of tasks in the project.
    The second line consists of N space-separated integers, representing the rotated order of task IDs.
 */

#include<stdio.h>
//Clang-12.0.0
int largest(int *arr,int n){
    for(int i= 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}


int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    largest(arr,n);
    printf("%d",arr[n-1]);
    return 0;
}
// Created on 31-05-2024.

