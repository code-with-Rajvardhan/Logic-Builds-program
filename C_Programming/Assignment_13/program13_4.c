//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 04/11/2026
//  Batch       : LB (Assignment 13)
//---------------------------------------------------------------------
// 
//  
// Q.4) Write a program which accept number from user and return 
//      multiplication of all digits.                     
//  
// 
//---------------------------------------------------------------------
//  Input  : 2395
//  Output : 270
//
//  Input  : 1018
//  Output : 8
//
//  Input  : 9440
//  Output : 144
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int icnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
        while (iNo!=0)
    {
        iDigit = iNo % 10;

        if(iDigit >= 3 && iDigit <= 7)
        {
            icnt++;
        }
        iNo = iNo/10;
    }
        return icnt;
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}