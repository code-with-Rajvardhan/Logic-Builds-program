//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 7)
//---------------------------------------------------------------------
// 
//  
// Q.4) Write a program which accepts N from user and 
//      print all odd numbers up to N.             (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 18
//  Output : 1  3  5  7  9  11  13  15  17
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(icnt % 2 != 0)
        {
            printf("%d \t",icnt);
        }
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    EXIT_SUCCESS;
}