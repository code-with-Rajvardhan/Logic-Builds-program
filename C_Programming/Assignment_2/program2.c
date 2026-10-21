//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 2)
//---------------------------------------------------------------------
// 
//  
// Q.2) Accept the number from user and print the number of * on screen    
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

    while(iNo >= iCnt )
    {
        printf("*\n");
        iNo--;
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