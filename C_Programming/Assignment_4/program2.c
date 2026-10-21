//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 4)
//---------------------------------------------------------------------
// 
//  
// Q.2)Check Even or Odd NumberProblem Statement: Accept an integer from the user
//     and determine whether it is even or odd. An even number is completely divisible by 2.Expected Output
//     Input: 24 → Even Number
//     Input: 17 → Odd Number
//           
//---------------------------------------------------------------------
// 
// Expected Output: Input: 24 → Even Number
//                  Input: 17 → Odd Number
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void cheakEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("its Even : %d",iValue);
    }
    else
    {
        printf("its Odd: %d",iValue);
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

    cheakEvenOdd(iValue);

    return EXIT_SUCCESS;
}