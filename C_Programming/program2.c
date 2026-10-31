//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 7)
//---------------------------------------------------------------------
// 
//  
// Q.2) Write a program which accept number from user and 
//      print numbers till that number.            (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 8
//  Output : 1  2  3  4  5  6  7  8
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d",icnt);
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

    Display(iValue);

    EXIT_SUCCESS;
}