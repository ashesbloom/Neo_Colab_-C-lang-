
/*
 Problem Statement

    Alex is creating a utility to evaluate a user's numerical input.
    The program calculates the absolute difference between the sum of digits at odd and even positions,
    where the first digit is considered position 1. Users enter a sequence of digits, and the program outputs the result.

 Example
 Input:
    5674

 Output:
    2

 Explanation:
    The sum of the even-position digits 6 and 4 is 10. In the odd position,
    the sum of digits 5 and 7 is 12. So, the absolute difference is |10-12| = 2.

 Input format :
    The input consists of an integer n.

 Output format :
    The output prints the difference between the sum of the odd and even position digits in the given integer.

 Refer to the sample output for the formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    10 ≤ n ≤ 107
 */
#include<stdio.h>
//Clang-12.0.0
int absolute(int a){
    return (a<0)?-a:a;
}
int main(void){
    char n[100];
    int sum_even = 0, sum_odd = 0;
    scanf("%s",n);
    for (int i;n[i]!='\0';i++){
        if(i%2==0){
            sum_even += n[i] - '0';
        }else{
            sum_odd += n[i] - '0';
        }
    }
    int result = sum_even - sum_odd;
    printf("%d",absolute(result));
    return 0;
}
// Created on 31-05-2024.
