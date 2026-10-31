//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 8)
//---------------------------------------------------------------------
// 
//  
// Q.2) Accept single digit number from user and 
//      print it into word.                            (31/10/2026 )
//  
// 
//---------------------------------------------------------------------
//  Input  : 9
//  Output : Nine
//
//  Input  : -3
//  Output : Three
//
//  Input  : 12
//  Output : Invalid Number
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    switch (iNO)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    
    default:
        printf("Invalid number ");
        break;
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    EXIT_SUCCESS;
}