//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 01/11/2026
//  Batch       : LB (Assignment 10)
//---------------------------------------------------------------------
// 
//  
// Q.3) Write a program which accept range from user and 
//      return addition of all numbers in between that range.
//      (Range should contains positive numbers only)
//  
// 
//---------------------------------------------------------------------
//  Input  : 23  30
//  Output : 212
//
//  Input  : 10  18
//  Output : 126
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iEnd )
{
    int icnt = 0;
    int iSum = 0;
 

    if(iStart < iEnd)
    {
        
        return 0;
    }
   
    for(icnt = iStart; icnt <= iEnd; icnt++)
    {
        iSum =  iSum + icnt;
    }
    return iSum;
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is : %d", iRet);

    return EXIT_SUCCESS;
}