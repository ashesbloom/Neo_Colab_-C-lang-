/*
 Problem Statement
    Reby is tasked with writing a program to assist a user in calculating the sum of odd numbers within a given range.
    The program should first prompt the user to enter a starting value and an ending value.
    Once the user provides these values, the program should utilize the continue statement to bypass even numbers and efficiently compute the sum of the remaining odd numbers within the specified range.



 Note: This question helps in clearing technical coding tests for service-based companies.

 Input format :
    The input consists of two integers a and b, representing the starting value and ending value, separated by a space.

 Output format :
    The output displays the sum of odd numbers between a and b.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    1 ≤ a < b ≤ 104
    a and b are inclusive.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int sum=0;
    for (int i = n1;i<=n2;i++){
        if(i%2==0){
            continue;
        }else{
            sum+=i;
        }
    }
    printf("%d",sum);

    return 0;
}
// Created on 31-05-2024.

