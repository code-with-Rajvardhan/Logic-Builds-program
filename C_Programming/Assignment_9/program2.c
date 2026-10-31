//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 9)
//---------------------------------------------------------------------
// 
//  
// Q.2) Accept amount in US dollar and return its 
//      corresponding value in Indian currency. 
//      Consider 1$ as 70 rupees.                   (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 10
//  Output : 700
//
//  Input  : 3
//  Output : 270
//
//  Input  : 1200
//  Output : 84000
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int DollertoINR(int iNO)
{
    int imul = 0;

    imul = iNO * 70;

    return imul;
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of usd : ");
    scanf("%d",&iValue);

    iRet = DollertoINR(iValue);

    printf("value is INR is %d",iRet);

    EXIT_SUCCESS;
}