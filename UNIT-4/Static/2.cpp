/*
 Problem Statement
    Sharangee is working on an application to assist urban planners in evaluating the sustainability of different city zones.
    The program should collect user input for three key sustainability metrics: air quality index, green space percentage, and public transportation accessibility.
    These metrics should be entered into a 3x3 matrix (a 2D array), each representing a different city zone.
    The user will be prompted to input values for each zone, and then the program will display the details
    of air quality, green space, and public transportation accessibility for each zone in a user-friendly format

 Input format :
    The input consists of 3 rows where each row consists of 3 space-separated float values representing air quality index, green space percentage, and public transport accessibility for each habitat respectively.

 Output format :
    The first line of output prints "Air quality index:
    " followed by the air quality of three habitats asfloat values rounded off to two decimal places separated by space.
    The second line of output prints "Green space percentage:
    " followed by the green space percentage of three habitats as float values rounded off to two decimal places separated by space.
    The third line of output prints "Public transportation accessibility:
    " followed by the public transportation accessibility of three habitats as float values rounded off to two decimal places separated by space.

 */

#include<stdio.h>
//Clang-12.0.0
int main(){
    float ecosystem[3][3];
    for(int i=0;i<3;i++)
    {
        scanf("%f %f %f",&ecosystem[i][0],&ecosystem[i][1],&ecosystem[i][2]);
    }
    printf("Air quality index: %.2f %.2f %.2f",ecosystem[0][0],ecosystem[1][0],ecosystem[2][0]);
    printf("\nGreen space percentage: %.2f %.2f %.2f",ecosystem[0][1],ecosystem[1][1],ecosystem[2][1]);
    printf("\nPublic transportation accessibility: %.2f %.2f %.2f",ecosystem[0][2],ecosystem[1][2],ecosystem[2][2]);
    return 0;
}
// Created on 31-05-2024.

