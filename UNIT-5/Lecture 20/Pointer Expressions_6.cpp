/*
 Problem Statement
    In a programming challenge, Ravneet is tasked with creating a program to determine the modulus of two numbers.
    Assist Ravneet in implementing a solution using pointers to accomplish this task effectively.

 Input format :
    The input consists of two space-separated integers N and M.

 Output format :
    The output prints "N % M = X", where N and M are the input integers and X is the result.
 */

#include <stdio.h>
//Clang-12.0.0
int main() {
    int N, M;
    int *pN = &N;
    int *pM = &M;

    scanf("%d %d", pN, pM);

    int modulus = *pN % *pM;

    printf("%d %% %d = %d\n", *pN, *pM, modulus);

    return 0;
}
//Created on 31-05-2024