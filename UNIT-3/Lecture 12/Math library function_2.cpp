/*
 Problem Statement
    Given a range [n, m], find the count of elements that have an odd number of factors in the given range (n and m inclusive).
    Use mathematical library functions to solve the problem.

 Input:
    n = 5, m = 100

 Output:
    8

 Explanation:
    The numbers with odd factors between 5 and 100 are 9, 16, 25, 36, 49, 64, 81 and 100. Hence the output is 8.

 Input:
    n = 8, m = 65
 Output:
    6
 Explanation:
    The numbers with odd factors between 8 and 65 are 9, 16, 25, 36, 49, and 64. Hence the output is 6.

 Your Task:
    Write a function named countOddFactors which takes two integers n and m as input and returns the answer.


 Note: This question was asked in Wipro coding test.

 Input format :
    The input consists of two space-separated integers n and m, representing the range.

 Output format :
    The output prints an integer, representing the count of elements that have an odd number of factors in the given range.

 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int countfactors(int x){
    int count = 0;
    for(int i = 1;i<=sqrt(x);i++){
        if(x%i==0){
            count++;
            if(x/i!=i){
                count++;
            }
        }
    }
    return (count%2!=0);
}


int countOddFactors(int a,int b,int c){
    for(int i=a;i<=b;i++){
        if(countfactors(i)){
            c++;
        }
    }
    return c;
}

int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int count = 0;
    printf("%d",countOddFactors(n1,n2,count));

    return 0;
}
// Created on 31-05-2024.

