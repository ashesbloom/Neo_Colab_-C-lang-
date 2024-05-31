/*
 Problem Statement
    Sarah is working on a project that involves processing sensor data from a device capturing various measurements over time.
    The sensor data is stored in an array of integers, where each element represents a specific measurement.
    Due to certain conditions or requirements in your project, you need to modify the data by alternating the signs of every measurement using pointers.

 Input format :
    The first line of input consists of a positive integer n, representing the number of sensor measurements.
    The second line of input consists of n space-separated integers representing the sensor data.

 Output format :
    The output displays the resulting data separated by space.
 */

#include <stdio.h>
//Clang-12.0.0
int main() {
    int n, i;

    scanf("%d", &n);
    int ptr[n];


    for(i = 0; i < n; i++) {
        scanf("%d",&ptr[i]);
    }

    for(i = 0; i < n; i++) {
        if(ptr[i]>0) {
            printf("%d ",-ptr[i]);
        } else {
            ptr[i]= -ptr[i];
            printf("%d ",ptr[i]);
        }
    }

    return 0;
}
// Created on 31-05-2024.