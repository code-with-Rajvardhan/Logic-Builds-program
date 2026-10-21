//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 6)
//---------------------------------------------------------------------
// 
//  
// Q.2) Calculate Electricity bill
//
//           
//---------------------------------------------------------------------
//    
//    Expected Output:80 -> 400; 150 -> 850;
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnit)
{
   
    if(iUnit >= 0 && iUnit <= 100)
    {
       iUnit = iUnit * 5;
       printf("Bill is : %d ",iUnit);
    }
     else if (iUnit > 100 && iUnit <= 200)
    {
       iUnit = (100 * 5) + (iUnit - 100) * 7;
       printf("Bill is : %d ",iUnit);
    }
     else if(iUnit > 200 )
    {
       iUnit = (100 * 5)+ (100 * 7) + (iUnit - 200) * 10;
       printf("Bill is : %d ",iUnit);
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iUnit = 0;

    printf("Enter consume unit :\n");
    scanf("%d",&iUnit);

    CalculateBill(iUnit);

    return EXIT_SUCCESS;
}
