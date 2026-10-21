//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 4)
//---------------------------------------------------------------------
// 
//  
// Q.3)  Find the Greater of Two NumbersProblem Statement: 
//       Accept two integers and determine which number is greater.
//       If both numbers are equal, display an appropriate message.
//      
//           
//---------------------------------------------------------------------
//  Expected Output
//       Input: 10 20 → 20 is Greater
//       Input: 50 30 → 50 is Greater
//       Input: 15 15 → Both Numbers Are Equal
// 
//---------------------------------------------------------------------
//=====================================================================


#include<stdio.h>
#include<stdlib.h>
 
void FindBig(int iValue1, int iValue2)
{
    if(iValue1 == iValue2)
    {
        printf("Both are same \n");
    }
   else if(iValue1 <= iValue2)
    {
        printf("%d is bigger", iValue2);
    }
    else
    {
        printf("%d is bigger",iValue1);
    }
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Two numbers :\n");
    scanf("%d %d",&iValue1,&iValue2);

    FindBig(iValue1,iValue2);

    return EXIT_SUCCESS;
}