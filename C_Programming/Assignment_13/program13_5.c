//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 04/11/2026
//  Batch       : LB (Assignment 13)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which accept number from user and return 
//      difference between summation of even digits and summation 
//      of odd digits.                                    
//  
// 
//---------------------------------------------------------------------
//  Input  : 2395
//  Output : -15   (2 - 17)
//
//  Input  : 1018
//  Output : 6     (8 - 2)
//
//  Input  : 8440
//  Output : 16    (16 - 0)
//---------------------------------------------------------------------
//=====================================================================


#include<stdio.h>
#include<stdlib.h>

int CheckDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = CheckDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

