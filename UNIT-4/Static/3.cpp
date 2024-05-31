/*
 Problem Statement
    Gokul is fascinated by numbers and wants to categorize them.
    Write a program to input an array of integers, then count and print the number of positive, negative, and zero elements.
    Implement a function countAndPrint that takes the array as a parameter and categorizes the numbers.

 Input format :
    The first line consists of an integer n, representing the size of the array.
    The next line consists of n space-separated integers, representing the array elements.

 Output format :
    The first line displays "Positive: " followed by an integer, representing the count of positive elements.
    The second line displays "Negative: " followed by an integer, representing the count of negative elements.
    The third line displays "Zero: " followed by an integer, representing the count of zeros.
 */

#include<stdio.h>
//Clang-12.0.0
void countAndPrint(int arr[],int n)
{
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive: %d",pos);
    printf("\nNegative: %d",neg);
    printf("\nZero: %d",zero);

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countAndPrint(arr,n);

}
// Created on 31-05-2024.
