//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 21/10/2026
//  Batch       : LB (Assignment 6)
//---------------------------------------------------------------------
// 
//   Check Triangle ValidityProblem Statement: Accept three integer values representing the lengths of the sides of a triangle. 
//   Determine whether they can form a valid triangle. All sides must be positive, 
//   and the sum of any two sides must be greater than the third side.
//   
//  
//
//           
//---------------------------------------------------------------------
//    
//  Expected Output:Input: 3 4 5 → Valid TriangleInput: 1 2 3 → Invalid TriangleInput: 0 4 5 → Invalid Triangle
//    
//---------------------------------------------------------------------
//=====================================================================
// Check Triangle Validity

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iside1, int iside2, int iside3)
{
    if(iside1 <= 0 || iside2 <= 0 ||iside3 <= 0)
    {
        if(iside1 == iside2 || (iside2 == iside3) || (iside3 == iside1))
        {
            printf("Invalid input\n");
            return;
        }
        
    }
    else if((iside1 < iside2 + iside3) && (iside2 < ( iside1 + iside3)) && (iside3 < iside2 + iside1))
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}

int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0;

    printf("Enter three sides\n");
    scanf("%d%d%d",&iside1,&iside2,&iside3);

    CheckTriangle(iside1, iside2, iside3);

    return EXIT_SUCCESS;
}