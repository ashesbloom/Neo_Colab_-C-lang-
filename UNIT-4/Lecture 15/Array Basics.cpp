/*
 Problem Statement
    Alex is working on a project to create a weather data analysis tool specifically designed for meteorologists.
    The core functionality of this tool involves an array named 'temperatures' that stores daily temperature readings as floating-point values.
    Users of the tool should be able to input the temperature for each day for a predetermined number of days.
    Additionally, the program should have the capability to retrieve and display the temperature recorded on any specific day as requested by the user.

 Input format :
    The first line of input consists of a positive integer 'days', representing the number of days for which temperatures are to be stored.
    The second line of input consists of space-separated float values representing the recorded temperature on each day.
    The third line of input consists of a positive integer 'fdays' representing the day on which the temperature should be retrieved.

 Output format :
    The output displays the float value representing the temperature recorded on a specific day rounded off to two decimal places.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int size;
    scanf("%d",&size);
    float temp[size-1];
    for(int i = 0;i<size;i++){
        scanf("%f ",&temp[i]);
    }
    int n;
    scanf("%d",&n);
    printf("%.2f",temp[n-1]);

    return 0;
}
// Created on 31-05-2024.

