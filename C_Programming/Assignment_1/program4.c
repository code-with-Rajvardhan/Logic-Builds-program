//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 1)
//---------------------------------------------------------------------
// 
// Q.4) accept one number and cheak wether is divisible 5 or not 
// 
//---------------------------------------------------------------------
//  Input  : 25
//  Output : divisible by 5
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Cheak( int iNo)
{
    if((iNo % 5)== 0)
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
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = Cheak(iValue);

    if(bRet == true)
    {
        printf("Divisiable by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }


    return EXIT_SUCCESS;
}