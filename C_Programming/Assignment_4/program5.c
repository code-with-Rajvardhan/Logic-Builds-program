//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 4)
//---------------------------------------------------------------------
// 
//  
// Q.5)Check Divisibility by Problem Statement: 
//     Accept an integer and determine whether it is divisible by 5 without leaving any remainder.
//
//           
//---------------------------------------------------------------------
//    
//    Expected Output:Input: 45 → Divisible by 5Input: 23 → Not Divisible by 5       
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>
 
void cheakDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("%d Divisible by 5",iValue);
    }
    else
    {
        printf("%d Not divisible by 5",iValue);
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    cheakDivisibility(iValue);

    return EXIT_SUCCESS;
}