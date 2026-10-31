//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 9)
//---------------------------------------------------------------------
// 
//  
// Q.4) Write a program to find odd factorial 
//      of given number.                           (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 15      (5 * 3 * 1)
//
//  Input  : -5
//  Output : 15      (5 * 3 * 1)
//
//  Input  : 10
//  Output : 945     (9 * 7 * 5 * 3 * 1)
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int icnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo--;
    }

    for(icnt = iNo; icnt >= 1; icnt -= 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    EXIT_SUCCESS;
}