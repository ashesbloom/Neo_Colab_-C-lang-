/*
 Problem Statement
    Rahul manages a car service facility and wants to calculate the service charges for cars based on the time they have spent at the facility.
    The program takes the number of cars 'n' and the hours each car has been at the facility.
    It then calculates the service charges according to specific conditions and displays the car number,
    hours of service, and the corresponding charges for each car. Rahul uses this program to efficiently manage his car service operations.
    Up to 3 hours: Rs. 30.0
    Beyond 3 hours: Rs. 30.0 + (hours - 3) * Rs. 5.0
    Exactly 24 hours: Rs. 80.0

 Input format :
    The first line consists of an integer n, representing the number of cars.
    The next n lines consists of two integers, representing the car number and the number of hours that the respective car has spent at the facility.

 Output format :
    For each car, the output displays three values separated by spaces, representing the car number, the hours of service,
    and the corresponding service charges.
    The charges should be displayed in two decimal places.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        int car[2];
        for(int j=0;j<2;j++){
            scanf("%d ",&car[j]);
        }
        float f = 0.0;
        if(car[1]<=3){
            f = 30.0;
            printf("%d %d %.2f\n",car[0],car[1],f);
        }else if(car[1]>3 and car[1]!=24){
            f = 30.0+(car[1]-3)*5.0;
            printf("%d %d %.2f\n",car[0],car[1],f);
        }
        if(car[1]==24){
            f = 80.0;
            printf("%d %d %.2f\n",car[0],car[1],f);
        }
    }

    return 0;
}
// Created on 31-05-2024.

