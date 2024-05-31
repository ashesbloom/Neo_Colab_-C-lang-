/*
Problem Statement
    Karthik is designing a program to manage number sequences.
    He inputs the initial size and elements of the sequence by allocating memory using malloc().
    Later, he decides to resize the sequence by providing a new size using realloc().
    He then takes the additional integers required for the sequence that will be appended to the initial sequence. The program displays both the initial and resized sequences.
    Help Karthik in developing the program.

Input format :
    The first line of input consists of an integer N, representing the initial size of the array.
    The second line consists of N space-separated integers, representing the initial elements of the sequence.
    The third line consists of an integer M, representing the new size of the array.
    The fourth line consists of (M-N) space-separated integers, representing the additional elements for the resized sequence.

Output format :
    The first line displays "Initial Sequence: " followed by the elements of the initial sequence, separated by a space.
    The second line displays "Resized Sequence: " followed by the elements of the resized sequence after the specified resizing.
 */

#include<stdio.h>
#include<stdlib.h>
//Clang-12.0.0
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    printf("Initial Sequence: ");
    for(int i=0;i<n;i++){
        scanf(" %d",&ptr[i]);
        printf("%d",ptr[i]);
    }
    printf("\n");
    int n2;
    scanf("%d",&n2);
    int *reptr = (int*)realloc(ptr,n2*sizeof(int));
    for(int i=n;i<n2;i++){
        scanf(" %d",&reptr[i]);
    }
    printf("Resized Sequence: ");
    for(int i = 0; i < n2; i++){
        printf("%d ",reptr[i]);
    }
    free(reptr);
    return 0;
}

// Created on 31-05-2024.

