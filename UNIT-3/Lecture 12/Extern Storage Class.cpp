/*
 Problem Statement
    Jacob was tasked with writing a program to find the smallest number among three numbers,
    but he was instructed to write the program using the extern storage class.
    Assist him in accomplishing his task.

 Input format :
    The input consists of three space-separated integers: num1, num2, and num3.

 Output format :
    The output displays "Smallest number is " followed by the smallest of three numbers.
*/

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int small(int a,int b,int c){
    return fminl(a,fminl(b,c));
}

extern int min = 0;

int main(void){
    int n,n1,n2;
    scanf("%d %d %d",&n,&n1,&n2);
    min = small(n,n1,n2);
    printf("Smallest number is %d",min);
    return 0;
}
// Created on 31-05-2024.

