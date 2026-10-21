//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 4)
//---------------------------------------------------------------------
// 
//  
// Q.4)   Check Voting EligibilityProblem Statement:
//        Accept the age of a person and determine whether the person is eligible to vote.
//        person must be at least 18 years old to vote. A negative age should be considered invalid.
//
//           
//---------------------------------------------------------------------
//     Expected Output Input: 21 → Eligible for Voting
//     Input: 16 → Not Eligible for Voting
//     Input: -5 → Invalid Age
//           
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>
 
void cheakVotes(int iAge)
{
    if(iAge <= 0)
    {
        printf(" invalid age\n");
    }
   else if(iAge < 18)
    {
        printf(" %d NOt Able to Vote ", iAge);
    }
    else
    {
        printf("%d Able for voting ",iAge);
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iAge = 0;

    printf("Enter your Age :\n");
    scanf("%d",&iAge);

    cheakVotes(iAge);

    return EXIT_SUCCESS;
}