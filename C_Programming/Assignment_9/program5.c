//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 9)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which returns difference between 
//      Even factorial and odd factorial of given number.
//                                                     (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : -7       (8 - 15)
//
//  Input  : -5
//  Output : -7       (8 - 15)
//
//  Input  : 10
//  Output : 2895     (3840 - 945)
//---------------------------------------------------------------------
//=====================================================================


#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}
//---------------------------------------------------------------------
// Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    EXIT_SUCCESS;
   
}
