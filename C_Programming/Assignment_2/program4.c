//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 2)
//---------------------------------------------------------------------
// 
//  
// Q.4) Accept 2 number from user and display 1st no in 2nd number of times
//  
// 
//---------------------------------------------------------------------
//  Input  : 5  4
//  Output : 5  5  5  5  5
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt<=iFrequency ; iCnt++)
    {
        printf("%d\n",iNo);
    }
    
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;

}