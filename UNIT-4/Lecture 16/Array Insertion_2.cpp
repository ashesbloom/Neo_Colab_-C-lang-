/*
 Problem Statement
    Develop a program that allows for the management of student IDs in a National Cadet Corps (NCC) context.
    Initially,the program should be capable of inputting and storing the IDs of NCC students. Following this,
    the program should be able to accommodate the addition of IDs for three new members who join the NCC after the initial group.
    The primary functionality of the program will be to input and store the IDs of the NCC students,
    append the IDs of the three new members at the end of the existing list, and finally, display the complete,
    updated list of all student IDs.

 Input format :
    The first line of input consists of an integer n, representing the number of NCC students.
    The second line of input consists of n space-separated integers ID[i], representing the NCC student IDs.
    The last line of input consists three integers M, N , and P, separated by a space, representing the IDs of Shahrukh's three friends.

 Output format :
    The output displays the updated list of IDs, a single line with n+3 space-separated integers after registering Shahrukh's friends following NCC students.

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
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    arr[n]=a;
    arr[n+1]=b;
    arr[n+2]=c;
    n+=3;
    display(arr,n);
    return 0;
}
// Created on 31-05-2024.

