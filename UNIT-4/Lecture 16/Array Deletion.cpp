/*
 Problem Statement
    Rohit, a cricket coach, needs a program to update his team's roster by removing the player currently in the last position.
    The task is to write a program that, given the list of players in the team,
    will eliminate the player at the end of the list and then display the updated team lineup.

 Input format :
    The first line of input is an integer 'n', the number of players in the team.
    The second line of input consists of 'n' space-separated integers positions[i], representing the positions of players.

 Output format :
    The output displays a single line of integer values of the modified positions of players after eliminating
    the last player, separated by a space.
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Created on 31-05-2024.
