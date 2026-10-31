//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 8)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which accept number from user 
//      and display its table in reverse order.        (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 2
//  Output : 20  18  16  14  12  10  8  6  4  2
//
//  Input  : 5
//  Output : 50  45  40  35  30  25  20  15  10  5
//
//  Input  : -5
//  Output : 50  45  40  35  30  25  20  15  10  5
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
    for(icnt = 10 , iMul = 1; icnt >= 1; icnt--)
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