//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 2)
//---------------------------------------------------------------------
// 
//  
// Q.1) Accept the number from user and print the number of * on screen     (18/10/2026   12:56am)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : * * * * *
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter your number\n");
    scanf("%d",&iValue);

    Display(iValue);



    return EXIT_SUCCESS;
}