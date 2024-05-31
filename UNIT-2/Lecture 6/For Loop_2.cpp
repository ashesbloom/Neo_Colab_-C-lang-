/*
 Problem Statement
    Lily is working on a program to find perfect numbers within a user-defined range.
    Create a program for her that helps find and display all the perfect numbers within a user-defined range a and b.
    A perfect number is a number for which the sum of its proper divisors (excluding the number itself) equals the number itself
    Ask Lily for the starting and ending values (both inclusive) of the range and display the perfect numbers found.

 Note: This question helps in clearing technical coding tests for service-based companies.

 Input format :
    The input consists of two space-separated integers a and b, representing the starting and ending range, respectively.

 Output format :
    The output prints the perfect numbers present in the given range, separated by a space.
    If there are no perfect numbers present, the output prints "No perfect numbers".

 Refer to the sample output for formatting specifications.

 Code constraints :
    In the given scenario, the test cases will fall under the following constraints:
    5 ≤ a < b ≤ 105
 */

#include <stdio.h>
//Clang-12.0.0
int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

void findPerfectNumbers(int a, int b) {
    for (int num = a; num <= b; num++) {
        if (isPerfect(num)) {
            printf("%d ", num);
        }
    }
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    findPerfectNumbers(a, b);
    return 0;
}
// Created on 31-05-2024.

