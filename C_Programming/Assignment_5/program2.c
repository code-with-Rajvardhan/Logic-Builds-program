//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 5)
//---------------------------------------------------------------------
// 
//  
// Q.2) Check Leap YearProblem Statement: 
//      Accept a year and determine whether it is a leap year according to Gregorian calendar rules. 
//      A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. 
//      Consider years less than or equal to zero invalid.
//
//           
//---------------------------------------------------------------------
//    
//    Expected Output:Input: 2024 → Leap YearInput: 1900 → Not a Leap YearInput: 2000 → Leap Year
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Findleapyear(int iYear)
{
    if ((iYear % 400) == 0 || (iYear % 4) == 0 && (iYear % 100) != 0)
    {
        printf(" %d it is laep year ",iYear);
    }
    else
    {
        printf("%d its not leap year ",iYear);
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iYear = 0;

    printf("Enter Year :\n");
    scanf("%d",&iYear);

    Findleapyear(iYear);

    return EXIT_SUCCESS;
}