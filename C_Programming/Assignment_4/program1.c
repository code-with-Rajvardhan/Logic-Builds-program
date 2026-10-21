//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 4)
//---------------------------------------------------------------------
// 
//  
// Q.1) 1 — Check Whether a Number Is Positive or NegativeProblem Statement: Write a C program that accepts an integer from the user
//          and determines whether the entered number is positive, negative, or zero.
//           
//  
// 
//---------------------------------------------------------------------
// 
// Expected Output:Input: 15 → Positive NumberInput: -8 → Negative NumberInput: 0 → Zero  
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Cheaknumber(int iValue)
{
   if(iValue == 0)
   {
    printf("its zero %d",iValue);
   }
    else if(iValue >= 0 )

    {
        printf("its possitive : %d",iValue);
    }
    else
    {
        printf("its negative : %d",iValue);
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

    Cheaknumber(iValue);

    return EXIT_SUCCESS;
}