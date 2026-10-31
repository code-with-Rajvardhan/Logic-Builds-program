//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 8)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept number from user and 
//      if number is less than 50 then print small, 
//      if it is greater than 50 and less than 100 then 
//      print medium, if it is greater than 100 then 
//      print large.                               (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 75
//  Output : Medium
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Number(int iNO)
{
    if(iNO < 50)
    {
        printf("its smaller than 50 : %d",iNO);
    }
    else if(iNO <= 100)
    {
        printf("its medium : %d",iNO);
    }
    else
    {
        printf("its greater : %d ", iNO);
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

    Number(iValue);

    EXIT_SUCCESS;
}