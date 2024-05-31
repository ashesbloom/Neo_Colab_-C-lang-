/*
 Problem Statement
    In a computer science class, students are assigned unique identification letters based on their seating arrangement.
    Each student has a specific letter, and you are tasked with creating a program to sort these letters in ascending order using the bubble sort algorithm.
    The sorting should be based on their ASCII values.
    Input the total number of students and their assigned letters, then display the sorted list, allowing the students to easily identify their seating order.

 Input format :
    The first line of input consists of an integer N, representing the total number of students.
    The second line consists of N space-separated characters, each representing the unique identification letter assigned to a student.

 Output format :
    The output prints the sorted list of identification letters based on their ASCII values.
 */

#include<stdio.h>
//Clang-12.0.0
void bubble_sort(char *a,int n){
    int check = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if((int) a[j] > (int) a[j+1]){
                check = 1;
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] =temp;
            }
        }
        if(check==0){
            break;
        }
    }
}

void display(char *a,int n){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    char a[n];
    for(int i = 0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    bubble_sort(a,n);
    display(a,n);
    return 0;
}
// Created on 31-05-2024.

