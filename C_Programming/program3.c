//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 7)
//---------------------------------------------------------------------
// 
//  
// Q.3) Write a program which accept number from user and 
//      print its numbers line.                    (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 4
//  Output : -4  -3  -2  -1  0  1  2  3  4
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    int icnt = 0;

    for(icnt = -iNO; icnt <= iNO; icnt++)
    {
        printf("%d \t",icnt);
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