//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 01/11/2026
//  Batch       : LB (Assignment 10)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which accept area in square feet 
//      and convert it into square meter.
//      (1 square feet = 0.0929 Square meter)          (01/11/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 0.464515
//
//  Input  : 7
//  Output : 0.650321
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSqrmeter = 0;

    dSqrmeter = iValue * 0.0929;

    return dSqrmeter;
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet ;\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter is : %f",dRet);

    return EXIT_SUCCESS;
}