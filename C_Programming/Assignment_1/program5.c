//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 1)
//---------------------------------------------------------------------
// 
// Q.5) Accept the one number from user and print the same number of * on screen 
//---------------------------------------------------------------------
//  Input  :5
//  Output :*****
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("*\n");
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}