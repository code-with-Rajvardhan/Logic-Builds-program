//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 04/11/2026
//  Batch       : LB (Assignment 12)
//---------------------------------------------------------------------
// 
//  
// Q.5) Write a program which accept number from user and count 
//      frequency of such a digits which are less than 6.
//                                                       
//  
// 
//---------------------------------------------------------------------
//  Input  : 2395
//  Output : 3
//
//  Input  : 1018
//  Output : 3
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void CountTwo(int iNo)
{
    int iDigit = 0;
    int icnt = 0;

    while (iNo!=0)
    {
        iDigit = iNo % 10;

        if(iDigit<6)
        {
            icnt++;
        }
        iNo = iNo/10;
    }
    printf("%d\n", icnt);
    
}
int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    CountTwo(iValue);
    return EXIT_SUCCESS;
}