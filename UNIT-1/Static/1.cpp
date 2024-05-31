/*
 Problem Statement

    Lilly went shopping with a budget of Rs. 10,000 to buy clothes, and accessories.
    The cost of clothes is twice the value of accessories, and there is an additional expense of Rs. 1000 for fuel.
    Develop an expense calculator by inputting the amount spent on accessories,
    then calculate and display Lilly's remaining amount rounded to two decimal places after her shopping.

 Example
 Input:
    2000.0
 Output:
    3000.0

 Explanation:
    budget = 10000.0;
    fuel = 1000.0;
    accessories = 2000.0
    clothes = 2 * accessories = 2 * 2000 = 4000.0
    total = clothes + accessories + fuel = 4000.0 + 2000.0 + 1000.0 = 7000.0
    remaining = budget - total = 10000.0 - 7000.0 = 3000.0

 Input format :
    The input consists of a float value a, representing the amount spent on accessories.

 Output format :
    The output prints the remaining budget after shopping, rounded to two decimal places in the following format:
    "Rs. [remaining amount]".

 Refer to the sample output for the formatting specifications.
 Code constraints :
    In this scenario, the test cases fall under the following constraints:
    10.0 ≤ a ≤ 3000.0
 */
#include<stdio.h>
//Clang-12.0.0
float b = 10000.0, oil = 1000.0;
int main(void){
    float a;
    scanf("%f",&a);
    float cost = oil + a + (a*2);
    printf("Rs. %.2f", b - cost);
    return 0;
}

// Created on 31-05-2024.
