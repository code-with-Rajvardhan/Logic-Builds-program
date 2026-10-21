//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 21/10/2026
//  Batch       : LB (Assignment 6)
//---------------------------------------------------------------------
// 
//  Check Admission EligibilityProblem Statement: 
//  A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years. 
//  Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.
//  
//
//           
//---------------------------------------------------------------------
//    
//  Expected Output:Input: 75 18 → Eligible for AdmissionInput: 55 19 → Not EligibleInput: 80 16 → Not Eligible 
//    
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>
void CheckAdmission(float fMarks , int iAge)
{
    if((fMarks >= 60) && (iAge >=17))
    {
        printf("%f %d it is eligible for admission",fMarks,iAge);
    }
    else if((fMarks <= 0) || (fMarks > 100) || (iAge <= 0))
    {
        printf("%f %d Its invalid",fMarks,iAge);
    }
    else
    {
        printf("Not Eligible");
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}