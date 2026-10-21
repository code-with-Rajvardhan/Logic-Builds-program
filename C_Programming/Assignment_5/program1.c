//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 5)
//---------------------------------------------------------------------
// 
//  
//  Find the Greatest of Three NumbersProblem Statement:
//  Accept three integers and determine the greatest number among them. 
//  The program must also work correctly when two or all three numbers are equal.
//
//
//           
//---------------------------------------------------------------------
//    
//   Expected Output:Input: 10 50 30 → 50 is GreatestInput: 40 40 20 → 40 is GreatestInput: 15 15 15 → 15 is Greatest     
//    
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>
 
void FindBig(int iValue1, int iValue2, int iValue3)
{
    if(iValue1 >= iValue2 >= iValue3)
    {
        printf("%d is bigger", iValue1);
    }
    else if(iValue1 <= iValue2 <= iValue3)
    {
        printf("%d is bigger",iValue3);
    }
    else
    {
        printf("%d is bigger ",iValue2);
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three numbers :\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindBig(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}