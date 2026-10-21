//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 5)
//---------------------------------------------------------------------
// 
//  
//   Calculate Student Grade
//   Problem Statement: Accept the marks of a student out of 100 and display the grade according to the following criteria. 
//   Marks outside 0-100 are invalid.MarksGrade90-100A75-89B60-74C40-59DBelow 40Fail
//   Expected Output:
//   
//
//           
//---------------------------------------------------------------------
//    
//    Expected Output:Input: Input: 85 → Grade BInput: 35 → FailInput: 105 → Invalid Marks
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Displaygrade(float fMarks)
{
  if(fMarks >= 90 && fMarks <= 100)
    {
        printf("%f Grade A", fMarks);
    }
    else if(fMarks >= 75)
    {
        printf("%f Grade B", fMarks);
    }
    else if(fMarks >= 60)
    {
        printf("%f Grade C", fMarks);
    }
    else if(fMarks >= 40)
    {
        printf("%f Grade D", fMarks);
    }
    else if(fMarks >= 0)
    {
        printf("%f Fail", fMarks);
    }
    else
    {
        printf("Invalid marks");
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    float fMarks = 0.0;
     
    printf("Enter your marks :\n");
    scanf("%f",&fMarks);

    Displaygrade(fMarks);

    return EXIT_SUCCESS;
}