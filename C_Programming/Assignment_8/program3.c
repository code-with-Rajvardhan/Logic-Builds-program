//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 8)
//---------------------------------------------------------------------
// 
//  
// Q.3) Write a program to find factorial of 
//      given number.                          (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 120  (5 * 4 * 3 * 2 * 1)
//
//  Input  : -5
//  Output : 120  (5 * 4 * 3 * 2 * 1)
//
//  Input  : 4
//  Output : 24   (4 * 3 * 2 * 1)
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int icnt = 0;
    int ifactorial = 0;

    for(icnt = iNo, ifactorial = 1; icnt >= 1 ; icnt--)
    {
        ifactorial = ifactorial * icnt;

    }
    return ifactorial;
   
    
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial number is %d ",iRet);

    EXIT_SUCCESS;
}