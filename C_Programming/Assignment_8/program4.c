//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 32/10/2026
//  Batch       : LB (Assignment 8)
//---------------------------------------------------------------------
// 
//  
// Q.4) Write a program which accept number from user 
//      and display its table.                     (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 2
//  Output : 2  4  6  8  10  12  14  16  18  20
//
//  Input  : 5
//  Output : 5  10  15  20  25  30  35  40  45  50
//
//  Input  : -5
//  Output : 5  10  15  20  25  30  35  40  45  50
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int icnt = 0;
    int iMul = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1 , iMul = 1; icnt <= 10; icnt++)
    {
        iMul = icnt * iNo;

        printf("%d ",iMul);
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

    Table(iValue);

    EXIT_SUCCESS;
}