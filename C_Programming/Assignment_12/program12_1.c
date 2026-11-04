//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 04/11/2026
//  Batch       : LB (Assignment 12)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept number from user and display 
//      its digits in reverse order.                      (01/11/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 2395
//  Output : 5
//           9
//           3
//           2
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
if(iNo<0)
{
    iNo = -iNo;
}
    int iDigit = 1;
    while(iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;

    }
}

int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}