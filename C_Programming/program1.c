//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 7)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept number from user and 
//      print that number of $ & * on screen.   (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : $  *  $  *  $  *  $  *  $  *
//
//  Input  : 3
//  Output : $  *  $  *  $  *
//
//  Input  : -3
//  Output : $  *  $  *  $  *
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t*\t");
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

    Pattern(iValue);

    EXIT_SUCCESS;
}