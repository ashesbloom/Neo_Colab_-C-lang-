/*
 Problem Statement
    In a corporate office, HR wants to implement a program to input an employee's ID and salary.
    Your task is to assist him in using pointers to efficiently manage and print the employee details,
    displaying the ID and salary for accurate record-keeping.

 Input format :
    The first line of input consists of an integer, representing the employee ID.
    The second line consists of a float value, representing the salary of the employee.

 Output format :
    The first line of output prints "ID: " followed by the employee ID, as an integer.
    The second line prints "Salary: " followed by the salary of the employee, as a float value, rounded off to two decimal places.
 */

#include <stdio.h>
//Clang-12.0.0
void printEmployeeDetails(int *id, float *salary) {
    printf("ID: %d\n", *id);
    printf("Salary: %.2f\n", *salary);
}

int main() {
    int id;
    float salary;

    scanf("%d", &id);

    scanf("%f", &salary);

    printEmployeeDetails(&id, &salary);

    return 0;
}

// Created on 31-05-2024.

