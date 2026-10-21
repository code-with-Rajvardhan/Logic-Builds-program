//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 2)
//---------------------------------------------------------------------
// 
//  
// Q.5) Accept  number from user and cheak whether number is even or odd
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : its odd
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL CheakEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheakEven(iValue);

    if(bRet == true)
    {
        printf("its Even\n");
    }
    else
    {
        printf("its Odd\n");
    }


    return EXIT_SUCCESS;
}