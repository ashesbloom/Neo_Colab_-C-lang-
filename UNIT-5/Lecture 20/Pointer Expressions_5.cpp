/*
 Problem Statement
    Sarah and Tom love pizza! They decided to share a pizza, but they were curious about how many pizza slices they had eaten.
    Help them by creating a program using pointers that calculate the fraction of the pizza slices they have eaten.

 Input format :
    The first line of input consists of an integer N, representing the total number of pizza slices.
    The second line consists of two space-separated integers, representing the number of slices Sarah and Tom ate, respectively.

 Output format :
    The output prints "Sarah and Tom, together ate X/Y of the pizza." where X is the number of slices Sarah and Tom ate and Y is the total slices.
 */

#include <stdio.h>
//Clang-12.0.0
int main() {
    int totalSlices, sarahSlices, tomSlices;
    int *pSarahSlices = &sarahSlices;
    int *pTomSlices = &tomSlices;

    scanf("%d", &totalSlices);

    scanf("%d %d", pSarahSlices, pTomSlices);

    int totalEaten = *pSarahSlices + *pTomSlices;

    printf("Sarah and Tom, together ate %d/%d of the pizza.", totalEaten, totalSlices);

    return 0;
}
//Created on 31-05-2024