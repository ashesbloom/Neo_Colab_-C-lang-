/*
 Problem Statement
    Benjamin is studying polar coordinates and wants to convert them to Cartesian coordinates.
    Develop a program that takes the radius (r) and angle (θ) in degrees as input,
    converts the angle to radians using inbuilt mathematical functions, and outputs the Cartesian coordinates (x, y).

 Formula
    radian = angle * pi / 180.0
    x = radius * cos(radian)
    y = radius * sin(radian)
    The pi value is calculated using M_PI constant from the math library.

 Note: This question helps in clearing AMCAT exam.

 Input format :
    The first line consists of a double-value r, representing the radius.
    The second line consists of a double-value a, representing the angle in degrees.

 Output format :
    The output prints two space-separated double values representing the Cartesian coordinates(x, y), both rounded to one decimal place.
 */

#include<stdio.h>
#include<math.h>
//Clang-12.0.0
int main(void){
    float r,a;
    scanf("%f\n%f",&r,&a);
    double ra,x,y;
    ra = a*M_PI / 180.0;
    x = r*cos(ra);
    y = r*sin(ra);
    printf("%.1lf %.1lf",x,y);
    return 0;
}
//Created on 31-05-2024.