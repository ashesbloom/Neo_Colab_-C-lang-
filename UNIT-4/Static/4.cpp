/*
 Problem Statement
    Reni is working on a programming challenge where she needs to add an element 'x' into an existing array at a specified index 'k'.
    The task requires her to take an existing array and two integers, 'x' and 'k'.
    Her goal is to insert the element 'x' into the array at the index 'k', effectively shifting the subsequent elements to the right.
    Once the insertion is complete, Reni should display the updated array.
    Help her with the program.

 Input format :
    The first line of input is an integer 'n', representing the initial size of the array.
    The second line of input consists of 'n' space-separated integers, the elements of the array.
    The third line of input is an integer 'x,' the element to be inserted.
    The fourth line of input is an integer 'k', representing the position to insert 'x.'

 Output format :
    The output displays the array after inserting 'x' at position 'k', separated by a space.

 */

#include<stdio.h>
//Clang-12.0.0
int insertion(int *arr, int n, int v, int k){
    for(int i=n;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=v;
}

void display(int *arr , int n){
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i = 0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    int v,i;
    scanf("%d\n%d",&v,&i);

    insertion(a,n,v,i);
    display(a,n);

    return 0;
}
// Created on 31-05-2024.

