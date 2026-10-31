//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 01/11/2026
//  Batch       : LB (Assignment 10)
//---------------------------------------------------------------------
// 
//  
// Q.3) Write a program which accept distance in kilometre 
//      and convert it into meter.
//      (1 kilometre = 1000 Meter)                 (01/11/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 5000
//
//  Input  : 12
//  Output : 12000
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iKm = 0;

    iKm = iNo * 1000;

    return iKm;

}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance;\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("distance in meters is : %d",iRet);

    return EXIT_SUCCESS;
}