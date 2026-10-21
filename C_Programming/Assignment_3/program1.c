//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 3)
//---------------------------------------------------------------------
// 
//  
// Q.1) write a program which accept one no from user and print that no of Even nos of screen 
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 2 4 6 8 10
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{   
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt=2 ; iCnt<=iNo; iCnt+= 2)
    {
        printf(" %d\n",iCnt);

    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    
    return EXIT_SUCCESS;
    
}

