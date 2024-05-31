/*
 Problem Statement
    Drake is working on a program that converts an integer to both binary and hexadecimal representations.
    Write a program that prints the binary representation of the integer without leading zeros and its hexadecimal representation.

 Note: This question helps in clearing technical coding tests for service-based companies.

 Input format :
    The first line of input consists of an integer value 'n', representing the user input.

 Output format :
    The first line of output displays "Binary: " followed by the binary representation without leading zeros.
    The second line of output displays "Hexadecimal: " followed by the hexadecimal representation.

 Refer to the sample output for the formatting specifications.

Code constraints :
    In this scenario, the test cases fall under the following constraints:
    1 ≤ n ≤ 100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int bin = n;
    int rem[32];
    int i=0;
    if(bin==0){
        printf("Binary: %d",0);
    }else{
        while(bin!=0){
            rem[i] = bin%2;
            bin /= 2;
            i++;
        }
        printf("Binary: ");
        for(int j=i-1;j>=0;j--){
            printf("%d",rem[j]);
        }
    }
    printf("\nHexadecimal: %X",n);
    return 0;
}
// Created on 31-05-2024.

