/*
 Problem Statement
    Sam is on a quest to decipher enchanted scrolls in an ancient temple that requires unveiling the
    HCF (Greatest Common Divisor) and LCM (Least Common Multiple) of two numbers.
    Write a program where Sam enters two positive integers, calculates the HCF and LCM using a for loop, and displays them.

 Example
 Input:
    6 3

 Output:
    HCF = 3
    LCM = 6

 Explanation:
    HCF (Greatest Common Divisor) of two numbers is the largest number that divides both of them without leaving a remainder.
    For 6 and 3, the common divisors are 1 and 3. The largest of these is 3, so the HCF is 3.
    LCM (Least Common Multiple) of two numbers is the smallest number that is a multiple of both.
    To find the LCM, we typically use the formula: LCM(a, b) = (a * b) / HCF(a, b).
    For 6 and 3, (6 * 3) / 3 = 18 / 3 = 6. So, the LCM is 6.

 Note: This question helps in clearing AMCAT exam.

 Input format :
    The input consists of two space-separated integers: n1 and n2.

 Output format :
    The first line prints "HCF = " followed by an integer which is the HCF of n1 and n2.
    The second line prints "LCM = " followed by an integer which is the LCM of n1 and n2.

 Refer to the sample outputs for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    1 ≤ n1, n2 ≤ 1000
 */

#include<stdio.h>
//Clang-12.0.0
int min(int a,int b){
    return (a<=b)?a:b;
}
int main(void){
    int a,b,HCF,LCM;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=min(a,b);i++){
        if ((a%i==0) && (b%i==0)){
            HCF=i;
        }
    }
    LCM = (a*b)/HCF;
    printf("HCF = %d\n",HCF);
    printf("LCM = %d",LCM);
    return 0;
}
// Created on 31-05-2024.

