/*
 Problem Statement
    Given three integers A, B, C where  'A' denotes the first term of an arithmetic sequence, 'C'
    denotes the common difference between an arithmetic sequence and an integer 'B'.
    You need to tell whether 'B' exists in the arithmetic sequence or not. Return 1 if B is present in the sequence.
    Otherwise, return 0.

 Example 1
 Input:
    A = 1, B = 3, C = 2
 Output: 1
    Explanation: 3 is the second term of the sequence starting with 1 and having a common difference of 2.

 Example 2
 Input:
    A = 1, B = 2, C = 3
 Output: 0
    Explanation: 2 is not present in the sequence.

 Note: This question was used in the FactSet coding test.

 Input format :
    The input consists of three space-separated integers values A, B, and C,
    representing the first term 'A' of the arithmetic sequence, 'B' to check, and the common difference 'C' of the arithmetic sequence.

 Output format :
    The output displays 1 if 'B' is present in the arithmetic sequence, otherwise, it displays 0.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    -100 ≤ A, B, C ≤ 100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int a,b,c,check;
    scanf("%d %d %d",&a,&b,&c);
    check = ((b)-(a))%c;
    if (check==0){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
// Created on 31-05-2024.

