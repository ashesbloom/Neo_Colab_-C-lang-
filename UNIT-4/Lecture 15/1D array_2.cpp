/*
 Problem Statement
    Aryan, a recruiter, requires a program to screen candidates for a fitness program.
    The program must accommodate input from a specified number of candidates, denoted by N.
    For each candidate, four distinct values should be entered: age (an integer), height (a float), weight (an integer),
    and chest size (an integer). The program's objective is to evaluate these candidates against certain eligibility criteria.
    Once the evaluation is complete, it should display the indices (using 0-based indexing) of those candidates who meet the specified eligibility criteria.

    Age should be greater than 18 and less than 25
    Height between 5.7 and 6.0 feet (both inclusive).
    Weight between 45 and 60 kg (both inclusive).
    Chest size greater than 45 inches.

 Input format :
    The first line consists of an integer N, representing the number of candidates.
    The next N lines consist of four space-separated values, representing age (an integer), height (float), weight (an integer), and chest size (an integer).

 Output format :
    If there are eligible candidates, print space-separated indices of those candidates.
    If no eligible candidates are found, print -1.

 */

#include<stdio.h>
//Clang-12.0.0
struct arr{
    int age,w,c;
    float h;
};

int main(void){
    int n;
    scanf("%d",&n);
    bool check = true;
    struct arr a[n];
    for(int i=0;i<n;i++){
        scanf("%d %f %d %d",&a[i].age,&a[i].h,&a[i].w,&a[i].c);
        if((a[i].age>18 && a[i].age<25)&&(a[i].h>=5.7 && a[i].h<=6.0)){
            if(a[i].c>45){
                printf("%d ",i);
                check = false;
            }
        }
    }
    if(check){
        printf("-1");
    }
    return 0;
}
// Created on 31-05-2024.

