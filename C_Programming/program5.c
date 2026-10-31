//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 13/10/2026
//  Batch       : LB (Assignment 1)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which accept N and print 
//      first 5 multiples of N.                    (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 4
//  Output : 4  8  12  16  20
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Multidisplay(int iNo)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
       iSum = icnt * iNo;

       printf("%d \t",iSum);
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

    Multidisplay(iValue);

    EXIT_SUCCESS;
}