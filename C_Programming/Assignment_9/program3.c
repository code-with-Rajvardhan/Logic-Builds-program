//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 9)
//---------------------------------------------------------------------
// 
//  
// Q.3) Write a program to find even factorial 
//      of given number.                           (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 8       (4 * 2)
//
//  Input  : -5
//  Output : 8       (4 * 2)
//
//  Input  : 10
//  Output : 3840    (10 * 8 * 6 * 4 * 2)
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int iNo)
{
    int icnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(icnt = iNo; icnt >= 2; icnt -= 2)
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

//---------------------------------------------------------------------
// Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

     EXIT_SUCCESS;
}