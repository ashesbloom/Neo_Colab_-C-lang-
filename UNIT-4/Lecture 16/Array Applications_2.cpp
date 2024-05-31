/*
 Problem statement
    Jamie is currently working on an array manipulation problem and is seeking your assistance.
    The objective is to rearrange an array of integers by relocating all zeros to the end while maintaining
    the original order of the non-zero elements.
    Create a program that includes a function named moveZerosToEnd where the array is passed as an argument.

 Input format :
    The first line of input is an integer value 'N', representing the size of the array.
    The second line of input consists of N space-separated integers arr[i], representing the elements of the array.

 Output format :
    The output displays the modified array after relocating all zeros to the end, with elements separated by spaces.

 */

#include<stdio.h>
//Clang-12.0.0
void display(int arr[100],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index++]=arr[i];
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
    }
    display(arr,n);
    return 0;
}
// Created on 31-05-2024.

