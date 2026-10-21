//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 5)
//---------------------------------------------------------------------
// 
//  
//   
//    Check Divisibility by 3 and 5Problem Statement: 
//    Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5, or neither.
// 
//
//           
//---------------------------------------------------------------------
//    
//    Expected Output:Input:15 → Divisible by BothInput: 9 → Divisible by 3 OnlyInput: 10 → Divisible by 5 OnlyInput: 7 → Not Divisible by Either
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Findmultidiv(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("%d Divisible by 3 and 5",iValue);
    }
    else
    {
        printf("%d Its Not Divisible by 3 and 5",iValue);
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

    Findmultidiv(iValue);

    return EXIT_SUCCESS;
}