//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 1)
//---------------------------------------------------------------------
// 
//  
// Q.1) program to divide two numbeers            (18/10/2026   11:01pm)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : 5 4 3 2 1
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0 )
    {
        return -1;
    }
    iAns = iNo1/iNo2;

    return iAns;

}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iVaule1 = 15, iVaule2 = 5;
    int iRet = 0;

    iRet = Divide(iVaule1 ,iVaule2);

    printf("Division is : %d",iRet);


    return 0;
}